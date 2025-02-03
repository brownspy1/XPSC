// Created by @brownspy1 on 2025-02-03 Time:23-23-10
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
     int t; cin>>t;
     while (t--)
     {
        int n;cin>>n;
        int sum_o = 0, sum_e = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;cin>>x;
            if(i & 1){
                sum_e+=x;
            }else
            {
                sum_o+=x;
            }
            
        }

        int odd = (n/2), even = n-(n/2);

        if (sum_e%even != 0 || sum_o%odd != 0)
        {
            no;
            continue;
        }
        

        if((sum_e/even) == (sum_o/odd)){
            yes;
        }else
        {
            no;
        }
        

        
        
        
        

     }
     
    return 0;
}