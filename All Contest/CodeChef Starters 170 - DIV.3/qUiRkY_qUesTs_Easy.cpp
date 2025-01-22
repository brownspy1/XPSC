// Created by @brownspy1 on 2025-01-22 Time:21-34-41
#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main() {
    fast
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &x : v) {
            cin >> x;
        }
        ll ans = accumulate(all(v), 0LL);
        sort(all(v));
        ll sum = ans;
        for (int i = 0; i < n; ++i) {
            sum -= v[i];
            ans = max(ans, sum + (i + 1LL) * (i + 1LL));
        }
        ans = max(ans, 1LL * n * n);
        cout << ans << endl;
    }
    return 0;
}
