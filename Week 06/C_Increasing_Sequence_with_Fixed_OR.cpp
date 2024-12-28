// Created by @brownspy1 on 2024-12-28 Time:21-20-32
#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define cyes cout << "Yes" << endl;
#define cno cout << "No" << endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main()
{
    fast int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        deque<ll> x;
        for (int i = 0; i <= __lg(n); i++)
        {
            if ((n >> i) & 1)
            {
                ll value = n - (1LL << i);
                if (value > 0)
                {
                    x.push_front(value);
                }
            }
        }
        x.push_back(n);
        cout<<x.size()<<endl;
        for (auto &&i : x)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}