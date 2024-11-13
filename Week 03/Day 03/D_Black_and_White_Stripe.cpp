// Created by @brownspy1 on 2024-11-13 Time:14-23-35
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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll ans = 0;
        ll minimum = INT_MAX;
        ll l = 0, r = 0;

        while (r < n)
        {
            if (s[r] == 'W')
            {
                ans++;
            }
            r++;
            if (r - l == k)
            {
                minimum = min(minimum, ans);
                if (s[l] == 'W')
                {
                    ans--;
                }
                    l++;
            }
        }

        cout << minimum << endl;
    }

    return 0;
}
