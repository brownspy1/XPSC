// Created by @brownspy1 on 2024-12-18 Time:20-38-59
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
        int n,m,k;cin>>n>>m>>k;
        int ans = INT_MAX;
        for (int l = 1; l <=n; l++)
        {
            for (int w = 1; w <=m; w++)
            {
                int par = 2*(l+w);
                int x = abs(par-k);
                ans = min(ans,x);
            }
            
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}