// Created by @brownspy1 on 2024-12-16 Time:22-39-09
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
        int XOR = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            XOR^=v[i];
        }

        int ans = XOR;
        for (int i = 0; i < n; i++)
        {
            int cur = (XOR^v[i]);
            ans = min(ans,cur);
        }
        cout<<ans<<endl;;

        
    }

    
    return 0;
}