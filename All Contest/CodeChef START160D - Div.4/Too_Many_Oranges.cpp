// Created by @brownspy1 on 2024-11-13 Time:21-10-36
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
        int N, K;
        cin >> N >> K;
        bool flag = false;
        for (int i = 0; i <= N; i++)
        {
            for (int y = 0; y <= N - i; y++)
            {
                int z = N - i - y;
                if (10 * i + 11 * y + 12 * z == K)
                {
                    flag = true;
                }
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
