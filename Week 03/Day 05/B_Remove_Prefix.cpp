// Created by @brownspy1 on 2024-11-17 Time:12-30-31
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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        map<int, int> mp;
        int operations = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (mp[v[i]] == 0)
            {
                mp[v[i]]++;
                operations++;
            }else
            {
                break;
            }
            
        }

        cout << n - operations << endl;
    }
    return 0;
}
