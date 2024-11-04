// Created by @brownspy1 on 2024-11-04 Time:20-57-25
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
        int wheel;
        cin >> wheel;
        vector<int> btn(wheel);
        for (int i = 0; i < wheel; i++)
        {
            cin >> btn[i];
        }
        for (int i = 0; i < wheel; i++)
        {
            int cnt;
            cin >> cnt;
            string move;
            cin >> move;
            for (auto j : move)
            {
                if (j == 'D')
                {
                    if (btn[i] == 9)
                    {
                        btn[i] = 0;
                    }
                    else
                    {
                        btn[i]++;
                    }
                }
                else if (j == 'U')
                {
                    if (btn[i] == 0)
                    {
                        btn[i] = 9;
                    }
                    else
                    {
                        btn[i]--;
                    }
                }
            }
        }
        for (auto &&i : btn)
        {
            cout<<i<<" ";
        }cout<<endl;
        
    }

    return 0;
}
