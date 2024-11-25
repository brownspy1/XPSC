// Created by @brownspy1 on 2024-11-25 Time:00-03-20
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main(){
    fast
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int m = n*(n-1)/2;
        vector<int> v(m);
        for (int i = 0; i < m; i++)
        {
            cin>>v[i];
        }
        
        for (auto &&i : v)
        {
            cout<<i<<" ";
        }
        
        
        
        
    }
    
    return 0;
}
