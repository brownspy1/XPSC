// Created by @brownspy1 on 2025-02-14 Time:01-09-49
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
const int MOD = 1e9+7;
int power(int x,int n){
    int ans = 1%MOD;
    while (n)
    {
        if (n&1)
        {
            ans = (1LL * ans % MOD * x % MOD) % MOD;
        }
        x = (1LL*x%MOD*x%MOD)%MOD;
        n>>=1;
    }
    return ans;
    
}
int main(){
    fast
    int t;cin>>t;
    while (t--)
    {
        int x,n;cin>>x>>n;
        cout<<power(x,n)<<endl;
    }
    
    return 0;
}