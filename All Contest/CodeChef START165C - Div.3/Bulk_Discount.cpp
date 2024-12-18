// Created by @brownspy1 on 2024-12-18 Time:20-48-33
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
        int n;
        cin >> n;
        vector<int> v(n );
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int cost = 0;
        sort(all(v));
        for (int i = 0; i < n; i++)
        {
            cost +=max(0,v[i]-i);
        }
        cout << cost << endl;
    }

    return 0;
}