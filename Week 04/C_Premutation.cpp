// Created by @brownspy1 on 2024-11-27 Time:16-32-54
#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define cyes cout << "Yes" << endl;
#define cno cout << "No" << endl;
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
        vector<vector<int>> mt(n, vector<int>(n - 1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> mt[i][j];
            }
        }
        if (mt[0][0] != mt[1][0] && mt[0][0] != mt[2][0])
        {
            cout << mt[1][0] << " ";
            for (int i = 0; i < n -1; i++)
                cout << mt[0][i] << " ";
            cout << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (mt[0][0] != mt[i][0])
                {
                    cout << mt[0][0] << " ";
                    for (int j = 0; j < n - 1; j++)
                        cout << mt[i][j] << " ";
                    cout << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
