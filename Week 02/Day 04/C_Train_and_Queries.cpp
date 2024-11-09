// Created by @brownspy1 on 2024-11-06 Time:23-03-55
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
        int n,q;cin>>n>>q;
        map<int,set<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            mp[x].insert(i);
        }

        for (int i = 0; i < q; i++)
        {
            int l,r;cin>>l>>r;
            if (mp.find(l) == mp.end() || mp.find(r) == mp.end())
            {
                no
            }else
            {
                int left,right;
                left = *mp[l].begin();
                right = *mp[r].rbegin();
                if (left <= right)
                {
                    yes
                }else
                {
                    no
                }
                
                
            }
            
            
        }
        
        
        
    }
    
    
    return 0;
}
