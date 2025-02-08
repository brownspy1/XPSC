// Created by @brownspy1 on 2025-02-09 Time:02-12-51
#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define cyes cout << "Yes" << endl;
#define cno cout << "No" << endl;
#define ll long long
#define all(x) x.begin(), x.end()

void solve();

int main() {
    fast
    solve();
    return 0;
}

ll LCM(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}

void solve() {
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll extra = n / LCM(a, b);
    ll ans = (((n / a) * p + (n / b) * q) - extra * (p + q)) + extra * max(p, q);
    cout << ans << endl;
}