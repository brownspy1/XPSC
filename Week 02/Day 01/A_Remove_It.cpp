// Created by @brownspy1 on 2024-11-03 Time:19-49-13
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES";
#define no cout<<"NO";
#define ll long long int;
#define all(x) x.begin(), x.end()
int main(){
    fast
    int n,x;cin>>n>>x;
    for (int i = 0; i < n; i++)
    {
        int m;cin>>m;
        if (m!=x)
        {
           cout<<m<<" ";
        }
        
    }
    

    return 0;
}
