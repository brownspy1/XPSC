// Created by @brownspy1 on 2024-11-26 Time:18-12-33
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
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    int l = 0, r = 0;
    ll ans = 0 , sum = 0;
    while (r < n)
    {
        sum+=v[r];
        if (sum <= k)
        {
            ans += (r-l+1);
        }else
        {
            while (sum>k && l < r)
            {
                sum-=v[l];
                l++;
            }
            if (sum <= k){

                ans += (r-l+1);
            }
            
        }
        
        r++;
        
    }
    cout<<ans<<endl;
    return 0;
}
