// Created by @brownspy1 on 2025-02-07 Time:23-45-22
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
        string s;cin>>s;
        if (s[0] == 'c' && s[2] == 'b' || s[0] == 'b' && s[2] == 'a')
        {
            no
        }else
        {
            yes
        }
        
        
    }
    return 0;
}