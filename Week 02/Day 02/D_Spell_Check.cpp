// Created by @brownspy1 on 2024-11-04 Time:18-34-44
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
    string v = "Timur";
    sort(v.begin(),v.end());
    while (t--)
    {
        int n;
        cin >> n;
        string nm;cin>>nm;
        sort(nm.begin(),nm.end());
        if (n == 5 && v == nm && nm[0] == 'T')
        {
            yes;
        }else
        {
            no;
        }
        
        
    }
    return 0;
}
