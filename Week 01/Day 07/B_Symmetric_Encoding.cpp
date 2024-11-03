// Created by @brownspy1 on 2024-11-03 Time:17-07-31
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
#define st string
int main()
{
    fast int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string old;cin>>old;
        set<char> uniq;
        for (int i = 0; i < n; i++)
        {
            uniq.insert(old[i]);
        }
        // sort(all(ss));
        
        map<char,char> rep;
        auto it = --uniq.end();
        for (auto i = uniq.begin(); i != uniq.end(); i++)
        {
            rep[*i] = *it;
            it--;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<rep[old[i]];
        }cout<<endl;
        
    }

    return 0;
}
