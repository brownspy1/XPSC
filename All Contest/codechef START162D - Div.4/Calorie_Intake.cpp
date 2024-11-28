// Created by @brownspy1 on 2024-11-27 Time:20-32-33
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
    int x,y,z;cin>>x>>y>>z;
    int a = y*z;

    if (a <= x)
    {
        cout<<x-a<<endl;
    }else
    {
        cout<<-1<<endl;
    }
    
    
    return 0;
}
