// Created by @brownspy1 on 2024-11-22 Time:19-47-30
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
        int n, t, b;cin>>n>>t>>b;
        vector<int> bomb(b);
        for (int i = 0; i < b; i++)
        {
            cin >> bomb[i];
        }
        ll sum = 0;
        for (int i = 0; i < b; i++)
        {
            sum+= min(t+bomb[i],n);

        }
        
        cout<<sum<<endl;
    }

    return 0;
}
