// Created by @brownspy1 on 2024-11-02 Time:17-25-00
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
    fast int n;
    cin >> n;
    map<string, int> usar;
    while (n--)
    {
        string name;
        cin >> name;
        if (usar[name] >= 1)
        {
            cout << name << usar[name] << endl;
            usar[name] += 1;
        }
        else
        {
            usar[name] += 1;
            cout << "OK" << endl;
        }
    }

    return 0;
}
