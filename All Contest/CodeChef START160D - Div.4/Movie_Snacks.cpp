// Created by @brownspy1 on 2024-11-13 Time:21-02-11
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main(){
    fast
    int X,Y,Z;
    cin>>X>>Y>>Z;
    if (X+Y < Z)
    {
        int ans = ((X+Y)*2)+Y;
        cout<<ans; 
        return 0;
    }
    
    int ans = (2*Z)+Y;
    cout<<ans; 
    return 0;
}
