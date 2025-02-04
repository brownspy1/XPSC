// Created by @brownspy1 on 2025-02-04 Time:23-30-37
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
    ll n,k;cin>>n>>k;
    vector<ll> v;
    for (ll i = 1; i*i <= n; i++)
    {
        if (n%i == 0 )
        {
            v.push_back(i);
            if (i != n/i)
            {
                v.push_back(n/i);
            }
            
        }
        
    }
    if (v.size() < k)
    {
        cout<<-1<<endl;
    }else
    {
        sort(all(v));
        cout<<v[k-1]<<endl;
    }
    
    
    return 0;
}