#include <bits/stdc++.h>
using namespace std;

#define pub(X) push_back(X)
#define pob pop_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;

const int MOD = 1e9+7;
const int INF = INT_MAX;
const int NINF = INT_MIN;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve();
vector<int> P;

int n, k;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

void solve() {
    cin >> n >> k;

    if (k == 1) {
        cout << -1 << endl;
        return;
    }

   
    P.assign(n, 0);
    vector<int> groups[k];
    

    for (int i = 1; i <= n; ++i) {
        groups[i % k].pub(i);
    }


    int idx = 0;
    for (int i = 0; i < k; ++i) {
        for (int num : groups[i]) {
            P[idx++] = num;
        }
    }


    for (int i = 0; i < n; i++) {
        cout << P[i] << " ";
    }
    cout << endl;
}
