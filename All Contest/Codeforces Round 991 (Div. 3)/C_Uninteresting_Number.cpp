// Created by @brownspy1 on 2025-01-25 Time:22-35-14
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
        string s;cin>>s;
        ll sum = 0;int two = 0, three = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            sum+= (s[i]-'0');
            two += (s[i]=='2');
            three += (s[i]=='3');
        }
        if (sum%9LL == 0)
        {
            yes
            continue;
        }
        bool flag = false;
        for (ll i = 0; i <=  min(100,two); i++)
        {
            for (int j = 0; j <= min(100,three); j++)
            {
                if ((sum+2LL*i+6LL*j) % 9LL == 0)
                {
                    flag = true;
                    break;
                }
                
            }

            if (flag) break;
        }

        if (flag)
        {
            yes 
        }
        else
        {
            no
        }

    }
    
    return 0;
}