// Created by @brownspy1 on 2025-02-07 Time:23-37-09
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
        if (n%2 == 0)
        {
            cout<<-1<<endl;
            continue;
        }
        int h = n-1, l = 1;
        for (int i = 0; i < n; i++)
        {
            if (i&1)
            {
                cout<<h<<" ";
                h-=2;
            }
            else
            {
                cout<<l<<" ";
                l+=2;
            }
            
        }cout<<endl;
    }
    
    
    return 0;
}