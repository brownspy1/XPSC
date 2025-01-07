// Created by @brownspy1 on 2025-01-07 Time:22-22-40
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
        int n;
        cin>>n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        ll l = 0, r = n-2;
        while(l<n-2){
            v[r] = v[r]-v[l];
            l++;
        }
        ll ans = v[n-1]-v[r];
        cout<<ans<<endl;
        
    }
    
    return 0;
}