// Created by @brownspy1 on 2024-11-13 Time:21-58-59
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
        int n, m;
        cin >> n >> m;
        string x, y;
        cin >> x >> y;
        if (x == y)
        {
            cyes 
            continue;
        }
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
            if (x[i] == 'a')
                a++;
        for (int i = 0; i < m; i++)
            if (y[i] == 'a')
                b++;
        if (a != b)
        {
            cno 
            continue;
        }
        int xb = 0, yb = 0;
        for (int i = 0; i < n; i++)
        {
            if (x[i] == 'a')
            {
                break;
            }
            else
            {
                xb++;
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (y[i] == 'a')
            {
                break;
            }
            else
            {
                yb++;
            }
        }
        if (xb == yb)
        {
            cyes
        }
        else
        {
            cno
        }
    }
    return 0;
}
