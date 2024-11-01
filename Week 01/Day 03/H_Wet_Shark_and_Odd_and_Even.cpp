// Created by @brownspy1 on 2024-11-01 Time:20-42-02
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll n;cin>>n;
    ll sum = 0;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        sum +=v[i];
    }
    ll smin = INT_MAX;
    if (sum%2 == 0)
    {
        cout<<sum<<endl;
    }else
    {
        for (auto &&i : v)
        {
            if (i%2!=0)
            {
                smin = min(i,smin);
            }
            
        }
        cout<<sum-smin<<endl;
        
    }
    
    
    return 0;
}