// Created by @brownspy1 on 2024-11-03 Time:19-49-28
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES";
#define no cout<<"NO";
#define ll long long int;
#define all(x) x.begin(), x.end()
int main(){
    fast
    int ans=0;
    string a;cin>>a;
    string b;cin>>b;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            ans++;
        }
        
    }
    cout<<ans;
    
    return 0;
}
