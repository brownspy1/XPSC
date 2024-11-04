// Created by @brownspy1 on 2024-11-04 Time:21-30-21
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES";
#define no cout<<"NO";
#define ll long long int;
#define all(x) x.begin(), x.end()
int main(){
    fast
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int ans = 0;
        for (int i = 2; i <= n; i+=7)
        {
            ans++;
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}
