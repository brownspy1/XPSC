// Created by @brownspy1 on 2025-01-01 Time:21-13-36
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
        int n;cin >> n;
        vector<ll> v(n);
        for(int i = 0; i<n;i++) cin>>v[i];
        ll pr = 0;
        ll op = 0;
        for (int i = 0; i < n; i++)
        {
            pr+=v[i];
            op+=abs(pr);
        }
        cout<<op<<endl;
    }
    
    return 0;
}