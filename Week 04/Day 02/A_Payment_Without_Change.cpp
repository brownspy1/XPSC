// Created by @brownspy1 on 2024-11-18 Time:18-03-22
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
        int a,b,n,s;cin>>a>>b>>n>>s;
        int cop = min(a,s/n), ans = s-(cop*n);
        cout<<(ans <= b?"YES":"NO")<<endl;

    }
    return 0;
}
