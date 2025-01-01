// Created by @brownspy1 on 2025-01-01 Time:22-02-27
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
        ll n;cin>>n;
        int i = 0; 
        while (i<n)
        {
            if (i%2 == 0)
            {
                for (int j = 1; j <=n; j++)
                {
                    cout<<j<<" ";
                }
                
            }else
            {
                for (int j = n; j >= 1 ; j--)
                {
                    cout<<j<<" ";
                }
                
            }cout<<endl;

            i++;
        }
        
        
    }
    
    return 0;
}

