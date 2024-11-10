// Created by @brownspy1 on 2024-11-10 Time:12-56-35
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main(){
    fast
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        map<int,int> like,dislike;
        string st;cin>>st;
        for (int i = 0; i < n; i++)
        {
            
            if (st[i] == '0')
            {
                dislike[v[i]] = i;
            }else
            {
                like[v[i]] = i;
            }
        }
        int rating = 1;
        for (auto [x,y]: dislike)
        {
            v[y] = rating;
            rating++;
        }
        for (auto [x,y]: like)
        {
            v[y] = rating;
            rating++;
        }
        for (auto &&i : v)
        {
            cout<<i<<" ";
        }cout<<endl;
        
        
    }
    
    return 0;
}
