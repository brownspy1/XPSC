// Created by @brownspy1 on 2024-11-15 Time:22-09-55
#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main()
{
    fast int t;
    cin >> t;
    while (t--)
    {
        ll n, m, h;
        cin >> n >> m >> h;
        priority_queue<ll> npq;
        
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            npq.push(x);
        }
        priority_queue<ll> mpq;

        for (ll i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            mpq.push(x);
        }

        
        ll ans = 0;
        ll i = min(n, m);
        while (i != 0)
        {
            ans+= min(1LL*mpq.top()*h,1LL*npq.top());
            mpq.pop();
            npq.pop();
            i--;
        }
        cout<<ans<<endl;
    }

    return 0;
}
