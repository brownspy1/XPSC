// Created by @brownspy1 on 2024-11-10 Time:19-11-06
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
    fast ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        priority_queue<ll> Bonus;
        ll Hero = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x > 0)
            {
                Bonus.push(x);
            }
            else if (x == 0)
            {
                if (!Bonus.empty())
                {
                    auto it = Bonus.top();
                    Bonus.pop();
                    Hero += it;
                }
            }
        }
        cout << Hero << endl;
    }

    return 0;
}
