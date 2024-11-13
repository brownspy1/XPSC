// Created by @brownspy1 on 2024-11-13 Time:13-57-43
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main(){
    fast
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        if (n == 3)
        {
            cout<<0<<endl;continue;
        }
        sort(all(v));
        int minimum = 0;
        int a = v[n-2]-v[1];
        int b = v[n-3] - v[0];
        int c = v[n-1] - v[2];
        minimum = min({a,b,c});
        cout<<minimum<<endl;
        
        
    }
    
    return 0;
}
