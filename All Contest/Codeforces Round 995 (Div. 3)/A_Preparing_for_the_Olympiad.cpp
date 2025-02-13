// Created by @brownspy1 on 2024-12-22 Time:21-16-26
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
    int n;
    cin >> n;
    int a[n], b[n + 1] = {0};
    for (int i = 0; i < n; ++i) cin >> a[i];
    int num, cnt = 0;
    cin >> num;
    for (int i = 0; i < n - 1; ++i) {
        cin >> num;
        if (a[i] > num) cnt += a[i] - num;
    }
    cnt += a[n - 1];
    cout << cnt << endl;
}
