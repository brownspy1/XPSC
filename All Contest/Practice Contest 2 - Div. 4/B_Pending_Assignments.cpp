// Created by @brownspy1 on 2024-11-04 Time:21-19-43
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
        int X,Y,Z;
        cin>>X>>Y>>Z;
        int calcule_time = X*Y;
        int dedlinr_is = (Z*24*60);
        if (calcule_time<=dedlinr_is)
        {
            yes
        }else
        {
            no
        }
        
        

    }
    
    return 0;
}
