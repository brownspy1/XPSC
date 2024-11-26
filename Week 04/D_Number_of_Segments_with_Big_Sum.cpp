// Created by @brownspy1 on 2024-11-26 Time:18-19-07
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
    ll n , k;cin>>n>>k;
    vector<ll> v(n);
    for(int i = 0; i< n; i++)cin>>v[i];
    ll sum = 0,ans = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        sum+=v[r];
        while (sum>= k)
        {
            
        }
        
        r++;
        
        
    }
    
    return 0;
}
