// Created by @brownspy1 on 2024-11-03 Time:01-24-55
#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define yes cout << "YES";
#define no cout << "NO";
#define ll long long int;
#define all(x) x.begin(), x.end()
int main()
{
    fast int t;
    cin >> t;
    while (t--)
    {
        string pass;
        cin >> pass;
        string ans;
        bool insartded = false;
        for (int i = 0; i < pass.size() - 1; i++)
        {
            ans += pass[i];
            if (!insartded && pass[i] == pass[i + 1])
            {
                if (pass[i] != 'z')
                {
                    ans += char(pass[i] + 1);
                }
                else
                {
                    ans += 'a';
                }
                insartded = true;
            }
        }
        ans += pass[pass.size()-1];
         if (!insartded) {
            if (pass.back() != 'z') 
                ans += char(pass.back() + 1);
            else 
                ans += 'a';
        }

        cout << ans << endl;
    }
    return 0;
}
