// Created by @brownspy1 on 2025-01-16 Time:20-38-02
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()

int setBit(int x) {
    int count = 0;
    while (x) {
        count += (x & 1);
        x >>= 1;
    }
    return count;
}

int main(){
    fast
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin>>v[i];

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (setBit(i+1) != setBit(v[i]))
            {
                flag = false;
                break;
            }
            
        }
        if (flag)
        {
            cyes 
        }else{
            cno
        }
        


    }
    
    return 0;
}