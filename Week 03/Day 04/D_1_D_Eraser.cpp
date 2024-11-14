// Created by @brownspy1 on 2024-11-14 Time:22-15-53
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
        string ss;
        cin >> ss;
        int r = 0, ans = 0;
        while (r < n)
        {
            if (ss[r] == 'B')
            {
                ans++;
                r += k;
            }
            else
            {
                r++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
