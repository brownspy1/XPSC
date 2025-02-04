// Created by @brownspy1 on 2025-02-04 Time:20-12-35
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
        string s;cin>>s;
        int one = 0, zero = 0;
        for (int i = 0; i < n-1; i++)
        {
            if (s[i] == '1' && s[i+1] == '1')
            {
                one++;
            }else if (s[i] == '0' && s[i+1] == '0')
            {
                zero++;
            }
        }
        if (one == 0 && zero == 0)
        {
            cyes
            continue;
        }
        if (one == 1 && zero == 1)
        {
            cyes
            continue;
        }
        if (one >=2 || zero >= 2)
        {
            cno
            continue;
        }
        if (one == 1 && zero == 0)
        {
            if (s[0] == '0' || s[n-1] == '0')
            {
               cyes
               continue;
            }else
            {
                cno
                continue;
            }            
        }else
        {
            if (s[0] == '1' || s[n-1] == '1')
            {
                cyes
                continue;
            }else
            {
                cno
                continue;
            }
        }
        

    }
    
    return 0;
}