// Created by @brownspy1 on 2025-01-07 Time:22-01-08
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
        string question;cin>>question;
        map<char,int> mp;
        for (int i = 0; i < 4*n; i++)
        {
            mp[question[i]]++;
        }
        int ans = 0;
        for (auto x : mp)
        {
            if (x.first == '?')
            {
                continue;
            }else if (x.first != '?' && x.second > n)
            {
                ans += n;
            }else
            {
                ans+=x.second;
            }

        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}