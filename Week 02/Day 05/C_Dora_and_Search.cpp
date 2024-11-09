// Created by @brownspy1 on 2024-11-10 Time:00-35-44
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
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> val;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            val.push_back(x);
        }
        if (n < 4)
        {
            cout << -1 << endl;
            continue;
        }

        int l, r;
        l = 0;
        r = n - 1;
        bool flag = false;
        int maxv = n, minv = 1;
        while (l < r)
        {
            if (val[l] == minv)
            {
                l++;
                minv++;
            }
            else if (val[l] == maxv)
            {
                l++;
                maxv--;
            }

            else if (val[r] == maxv)
            {
                r--;
                maxv--;
            }
            else if (val[r] == minv)
            {
                r--;
                minv++;
            }
            else
            {
                flag = true;
                cout << l + 1 << " " << r + 1 << endl;
                break;
            }
        }

        if (!flag)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
