// Created by @brownspy1 on 2025-01-15 Time:20-32-29
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
        int n;cin>> n;
        string s;cin>>s;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                v.push_back(1);
            }else if(s[i] == '1'){
                v.push_back(0);
            }

        }
        for (auto &&i : v)
        {
            cout<<i;
        }cout<<endl;
        
        

    }
    
    return 0;
}