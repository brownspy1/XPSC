// Created by @brownspy1 on 2024-12-17 Time:19-14-59
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

        for (int i = 0; i <n; i++)
        {
            v[i]^=XOR;
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans ^= v[i];
        }
        if(ans == 0){
            cout<<XOR<<endl;
        }else
        {
            cout<<"-1"<<endl;
        }

    }
    
    return 0;
}