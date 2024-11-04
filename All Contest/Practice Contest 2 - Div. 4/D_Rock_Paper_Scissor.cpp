// Created by @brownspy1 on 2024-11-04 Time:21-39-15
#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define yes cout << "YES";
#define no cout << "NO";
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
        string ply1;
        cin >> ply1;
        string ply2;
        cin >> ply2;
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (ply1[i] == 'R' && ply2[i] == 'S') a++;
            else if (ply1[i] == 'S' && ply2[i] == 'R') b++;
            else if (ply1[i] == 'R' && ply2[i] == 'P') b++;
            else if (ply1[i] == 'P' && ply2[i] == 'R') a++;
            else if (ply1[i] == 'P' && ply2[i] == 'S') b++;
            else if (ply1[i] == 'S' && ply2[i] == 'P') a++;
        }
        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (a < b)
        {
            cout << (b - a)+1 / 2 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
