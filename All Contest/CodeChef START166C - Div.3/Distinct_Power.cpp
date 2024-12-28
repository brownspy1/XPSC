// Created by @brownspy1 on 2024-12-25 Time:22-29-52
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

void solve(){
  int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        vector<pair<int, int>> v;
        for (int i = 0; i < n; ++i) v.push_back({a[i], i + 1});
        sort(v.rbegin(), v.rend());

        int cnt = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (abs(v[i].second - v[i + 1].second) == 1) cnt++;
        }
        cout << n - cnt << endl;
}