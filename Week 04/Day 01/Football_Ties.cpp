// Created by @brownspy1 on 2024-11-17 Time:18-35-27
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
        int a,b;cin>>a>>b;
        int cnt = 0;
        int acv = min(a,b);
        cnt = acv%3;
        cout<<cnt<<endl;
    }
    
    return 0;
}
