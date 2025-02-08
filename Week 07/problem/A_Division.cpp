/*
For Division 1: 1900≤rating
For Division 2: 1600≤rating≤1899
For Division 3: 1400≤rating≤1599
For Division 4: rating≤1399 */
// Created by @brownspy1 on 2025-02-08 Time:23-51-47
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
        int n;
        cin>>n;
        if (n <= 1399)
        {
            cout<<"Division 4"<<endl;
        }else if(n >= 1400 && n <= 1599)
        {
            cout<<"Division 3"<<endl;
        }else if(n >= 1600 && n<= 1899)
        {
            cout<<"Division 2"<<endl;
        }else if(n >=1900)
        {
            cout<<"Division 1"<<endl;
        }
        
        
        
        
    }
    
    return 0;
}