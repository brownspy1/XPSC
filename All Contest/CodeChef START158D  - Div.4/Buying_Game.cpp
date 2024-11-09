// Created by @brownspy1 on 2024-11-09 Time:16-12-13
#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define yes cout << "YES"
#define no cout << "NO"
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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int cnt = 0, idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (min(a[i], b[i]) != b[i])
            {
                cnt++;
                idx = i;
            }
        }
        if (cnt == 0 || cnt > 1)
        {
            ll ans = 0;
            for (int i = 0; i < n; i++)
            {
                ans += min(a[i], b[i]);
            }
            cout << ans << '\n';
        }
        else
        {
            ll ans = 0, result = 0;
            for (int i = 0; i < n; i++)
            {
                ans += b[i];
            }
            result = ans;
            for (int i = 0; i < n; i++)
            {
                if (i != idx)
                {
                    ll ctv = result - b[idx] - b[i] + a[idx] + a[i];
                    ans = min(ctv, ans);
                }
            }
            cout << ans << '\n';
        }
    }

    return 0;
}
