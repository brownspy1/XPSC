// Created by @brownspy1 on 2024-11-06 Time:12-30-46
#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define ll long long int;
#define all(x) x.begin(), x.end()
int main()
{
    fast int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string color1, color2;
        cin >> color1 >> color2;
        // G == B
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (!((color1[i] == 'G' && color2[i] == 'B' || color1[i] == 'B' && color2[i] == 'G') || color1[i] == color2[i]))
            {
                flag = false;
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

    return 0;
}
