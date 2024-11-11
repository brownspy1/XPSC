// Created by @brownspy1 on 2024-11-10 Time:23-45-46
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
        int n;cin>>n;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            sum+=x;
        }
        if (sum%n == 0 || n%sum == 0)
        {
            yes
        }else
        {
            no
        }
        
        
        
    }
    
    return 0;
}
