// Created by @brownspy1 on 2024-11-16 Time:23-03-05
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
        ll n;cin>>n; 
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        ll ans = 0, cnt = 0;
        ll r = 0;
        bool flag = false;
        while (r < n)
        {
            if (v[r] < 0)
            {
                ans += 1LL*(v[r]*-1);
                
                 if (!flag)
                 {
                    flag = true;
                    cnt++;
                 }
                 
            }else if(v[r] > 0)
            {
                ans += 1LL*v[r];
                flag = false;
                
            }
            r++;

        }
        
        
        cout<<ans<<" "<<cnt<<endl;
        
    }
    
    return 0;
}
