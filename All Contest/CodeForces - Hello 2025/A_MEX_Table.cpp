// Created by @brownspy1 on 2025-01-04 Time:20-40-39
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
        int a,b;cin>>a>>b;
        int ans = max(a,b);
        cout<<ans+1<<endl;
    }
    
    return 0;
}