// Created by @brownspy1 on 2024-11-01 Time:22-14-33
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES";
#define no cout<<"NO";
#define ll long long int;
#define all(x) x.begin(), x.end()
int main(){
    fast
    int n;cin>>n;
    map<pair<string,string>,bool> mp;
    for (int i = 0; i < n; i++)
    {
        string tree,lefs;cin>>tree>>lefs;
        mp[{tree,lefs}] = true;
    }
    cout<<mp.size()<<endl;
    
    return 0;
}
