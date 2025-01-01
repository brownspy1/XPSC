// Created by @brownspy1 on 2025-01-01 Time:20-35-59
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
        string word;cin>>word;
        if (count(all(word),'0') == n || count(all(word),'1') == n)
        {
            cout<<n<<endl;
        }else
        {
            cout<<1<<endl;
        }
        

    }
    
    return 0;
}
