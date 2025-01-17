// Created by @brownspy1 on 2025-01-17 Time:21-40-43
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> res;
        
        if (n % 2 == 0) {
            for (int i = 0; i < n / 2; i++) {
                res.push_back(i % 3 + 1);
            }
            for (int i = n / 2 - 1; i >= 0; i--) {
                res.push_back(res[i]);
            }
        } else {
            for (int i = 0; i < n / 2; i++) {
                res.push_back(i % 3 + 1);
            }
            res.push_back(1);
            for (int i = n / 2 - 1; i >= 0; i--) {
                res.push_back(res[i]);
            }
        }
        
        for (int i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}