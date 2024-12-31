// Created by @brownspy1 on 2024-12-31 Time:23-33-37
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
const int D = 30;
int main(){
    fast
    int t;cin>>t;
    while (t--)
    {
        int n,k;cin>>n>>k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        vector<int> bits(D+1);

        for (int i = 0; i < n; i++)
        {
            for (int j = D; j >=0; j--)
            {
                if ((a[i] >> j ) & 1)
                {
                    bits[j]++;
                }
            }
            
        }
        ll ans = 0;
        for (int i = D; i >=0; i--)
        {
            if (bits[i] == n)
            {
                ans+= (1LL << i);
            }else
            {
                int need = n-bits[i];
                if (need <= k)
                {
                    ans+= (1LL<<i);
                    k-=need;
                }
                
            }
            
            
        }
        cout<<ans<<endl;
        
        
    }
    
    return 0;
}