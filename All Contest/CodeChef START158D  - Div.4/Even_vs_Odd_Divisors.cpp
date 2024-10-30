// Created by @brownspy1 on 2024-10-30 Time:20-36-59
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int odd = 0, even = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
        }
        if (even > odd)
            cout << 1 << endl;
        else if (even == odd)
            cout << 0 << endl;
        else if (even < odd)
            cout << -1 << endl;
    }

    return 0;
}