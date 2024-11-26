// Created by @brownspy1 on 2024-11-26 Time:16-21-54
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
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ll sum = 0;
    ll l = 0, r = 0;
    ll ans = INT_MAX;
    while (r < n)
    {
        sum += v[r];
        while(sum >= k)
        {
            ans = min(ans*1LL,(r-l+1)*1LL);
            sum-=v[l];
            l++;
        } 
        r++;
    }
    cout << (ans == INT_MAX ? -1 : ans) << endl; 
    
    return 0;
}
