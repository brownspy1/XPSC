// Created by @brownspy1 on 2024-11-22 Time:18-39-12
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
    while(t--){
        int a,b,c;cin>>a>>b>>c;
        int one = abs(a-1);
        int two = abs(c-1)+abs(b-c);
        if (one == two)
        {
            cout<<3<<endl;
        }else if (one<two)
        {
            cout<<1<<endl;
        }else
        {
            cout<<2<<endl;
        }

    }
    return 0;
}
