// Created by @brownspy1 on 2024-11-17 Time:20:57:09
#include <bits/stdc++.h>
using namespace std;

#define pub(X) push_back(X)
#define pob pop_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"

const int MOD = 1e9 + 7;
const int INF = INT_MAX;
const int NINF = INT_MIN;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve();

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
void solve() {
    int n;
    cin >> n; 

    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        freq[val]++;
    }

    int cnt = n - 2;
    for (int i = 1; i * i <= cnt; i++) {
        if (cnt % i == 0) {
            int div1 = i, div2 = cnt / i;

            if ((freq[div1] > 0 && freq[div2] > 0) && (div1 != div2 || freq[div1] > 1)) {
                cout << div1 << " " << div2 << endl;
                return;
            }
        }
    }
    cout << "0 0" << endl; 
}
