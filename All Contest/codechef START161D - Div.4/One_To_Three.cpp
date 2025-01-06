// Created by @brownspy1 on 2025-01-06 Time:22-51-00
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
        int n;cin>>n;
        vector<int> v(n);
        for(int i = 0;i<n;i++) cin>>v[i];

        for (int i = 1; i < n-1; i++)
        {
            if (v[i-1]+v[i+1] == 4)
            {
                if (v[i] > 2)
                {
                    v[i] = 4-v[i];
                }
                
            }
            
        }
        
        for (int i = n-2; i > 0; i--)
        {
            if (v[i-1]+v[i+1] == 4)
            {
                if (v[i] > 2)
                {
                    v[i] = 4-v[i];
                }
                
            }
            
        }
        int sum = 0;
        for (int i = 0; i <n; i++)
        {
            sum+=v[i];
        }
        cout<<sum<<endl;
        
        
    }
    
    return 0;
}