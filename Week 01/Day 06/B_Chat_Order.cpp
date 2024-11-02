// Created by @brownspy1 on 2024-11-02 Time:19-26-44
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
    fast
        map<string, int>
            chat;
    deque<string> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        v.push_back(name);
    }
    while (!v.empty())
    {
        if (chat[v.back()] == 0)
        {
            cout << v.back() << endl;
            chat[v.back()]++;
        }
            v.pop_back();
    }

    return 0;
}
