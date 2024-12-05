// Created by @brownspy1 on 2024-12-05 Time:20:38:54
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
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int sum = 0, x = 0;
    for (auto &word : v) {
        if (sum + word.size() > m) {
            break; 
        }
        sum += word.size();
        x++; 
    }
    
    cout << x << endl;
}
