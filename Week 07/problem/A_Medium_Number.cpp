// Created by @brownspy1 on 2025-02-12 Time:22-48-07
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
        int a,b,c;
        cin>>a>>b>>c;
        if ((a > b && a < c) || (a > c && a < b))
        {
           cout<<a<<endl;
        }else if ((b > a && b < c) || (b > c && b < a))
        {
            cout<<b<<endl;
        }else
        {
            cout<<c<<endl;
        }
        
        
        
    }
    return 0;
}