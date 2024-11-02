// Created by @brownspy1 on 2024-11-02 Time:19-54-13
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ll long long int;
#define all(x) x.begin(), x.end()
int main(){
    fast
    int n;
    cin>>n;
    map<string,bool> mp;
    while (n--)
    {
        string name;cin>>name;
        if (mp[name] == false)
        {
            mp[name]=true;
            no
        }else
        {
            yes
        }
        
        
    }

    
    
    return 0;
}
