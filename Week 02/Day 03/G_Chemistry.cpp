// Created by @brownspy1 on 2024-11-05 Time:23-30-14
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ll long long int;
#define all(x) x.begin(), x.end()
int main(){
    fast
    int t;cin>>t;
    while (t--)
    {
         int n,e;cin>>n>>e;
         string word;cin>>word;
         map<char,int> count;
         for (int i = 0; i < n; i++)
         {
            count[word[i]]++;
         }
         int odd = 0;
         for (auto [x,y] : count)
         {
            if (y%2!=0)
            {
                odd++;
            }
            
         }
         int ans = odd-e;
         if (ans > 1)
         {
            no
         }else
         {
            yes
         }
         
         

    }
    
    return 0;
}
