// Created by @brownspy1 on 2024-12-18 Time:23-25-03
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
        for(int i = 0; i < n; i++) cin>>v[i];
        map<char,int> mp;
        for (char i = 'a'; i <= 'z'; i++)
        {
            mp[i] = 0;
        }
         for (int i = 0; i < n; i++) {
            for (char ch = 'a'; ch <= 'z'; ch++) {
                if (v[i] == mp[ch]) {
                    cout << ch;
                    mp[ch]++;
                    break; 
                }
            }
        }cout<<endl;
        
        
    }
    
    return 0;
}