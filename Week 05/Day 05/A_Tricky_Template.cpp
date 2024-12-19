// Created by @brownspy1 on 2024-12-20 Time:01-19-59
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
        string a, b, c;
        cin >> a >> b >> c;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != c[i] && b[i] != c[i])
            {
               
                flag = true;
                break;
            }
        }
        if (flag)
        {
            yes
        }else
        {
            no
        }
        
        
        
    }

    // string s;
    // for (int i = 0; i <n; i++)
    // {
    //     if (a[i] == b[i])
    //     {
    //         s.push_back(a[i]);
    //     }else
    //     {
    //         s.push_back(char(c[i]-32));
    //     }

    // }

    return 0;
}