// Created by @brownspy1 on 2025-01-17 Time:21-43-07
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()

int main() {
    int t;cin>>t;
    while (t--) {
        int n; cin>>n;
        
        for (int i = 1; i <= n - 1; i++) {
            if (i == 1)
            {
                cout<<1<<" ";
            }else if(i == n-1)
            {
                cout<<1<<" "<<2<<" ";
            }else 
            {
                cout<<i-1<<' ';
            }
            
        }cout<<endl;
    }
    return 0;
}