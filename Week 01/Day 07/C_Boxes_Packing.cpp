// Created by @brownspy1 on 2024-11-03 Time:18-29-21
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES";
#define no cout<<"NO";
#define ll long long int;
#define all(x) x.begin(), x.end()
int main(){
    fast
    int n;cin>>n;
   map<int,int> mp;
    int mx=INT_MIN;
    for(int i = 0; i<n;i++){ int x;cin>>x;mp[x]++;}
    for (auto [x,y] : mp)
    {
        mx = max(mx,y);
        
    }cout<<mx;
    
    return 0;
}
