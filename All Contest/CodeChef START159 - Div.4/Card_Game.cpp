// Created by @brownspy1 on 2024-11-06 Time:20-35-53
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
        int n, x;
        cin >> n >> x;
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i != x)
            {
                if ((i + x) % 2 == 0)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
