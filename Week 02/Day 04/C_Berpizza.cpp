// Created by @brownspy1 on 2024-11-09 Time:22-23-11
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main(){
    fast
    int n;cin>>n;
    int customerNo = 1;  
    set<pair<int,int>> po;
    multiset<pair<int,int>>mo;
    vector<int> ans;
    while (n--)
    {
        int type;cin>>type;
        if (type == 1)
        {
            int taka;cin>>taka;
            po.insert({customerNo,taka});
            mo.insert({taka,-customerNo});
            customerNo++;
        }else if (type == 2)
        {
            int position = po.begin()->first,taka = po.begin()->second;
            ans.push_back(position);
            po.erase({position,taka});
            mo.erase({taka,-position});
        }else
        {
            int pos = -mo.rbegin()->second,taka = mo.rbegin()->first;
            ans.push_back(pos);
            // mo.erase({taka,pos});
            mo.erase(--mo.end());
            po.erase({pos,taka});
        }

    }
    for (auto &&i : ans)
    {
        cout<<i<<" ";
    }
    
    
    return 0;
}
