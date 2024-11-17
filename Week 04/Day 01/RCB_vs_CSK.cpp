// Created by @brownspy1 on 2024-11-17 Time:18-18-59
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main(){
    fast
    int x,y;cin>>x>>y;
    int ans = x-y;

    if (ans >= 18)
    {
        cout<<"RCB"<<endl;
    }else
    {
        cout<<"CSK"<<endl;
    }
    
    
    return 0;
}
