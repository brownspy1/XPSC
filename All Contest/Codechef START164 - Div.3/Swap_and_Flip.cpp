// Created by @brownspy1 on 2025-01-07 Time:00-19-28
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
        string a,b;cin>>a>>b;
        for (int i = 0; i < n; i++)
        {
            if ( a[i] != b[i] )
            {
                int j = i+1;
                while (j<n && a[j] == b[j])
                {
                    j++;
                    
                }

                if (j==n)
                {
                    continue;
                }
                
                a[i] = b[i];
                a[j] = b[j];
            }
            
        }
        if (a==b)
        {
            yes;
        }
        else
        {
            no;
        }
        
        
    }
    
    return 0;
}