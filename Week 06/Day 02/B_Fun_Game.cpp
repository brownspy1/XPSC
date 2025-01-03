// Created by @brownspy1 on 2025-01-02 Time:23-55-49
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
        string a;cin>>a;
        string b;cin>>b;

        int index = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                index = i;
                break;
            }
            
        }
        if ( a == b)
        {
            yes;
            continue;
        }
        
        if (index == -1 )
        {   no
            continue;
        }

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if(a[i] != b[i]){
                if(index>i){
                    flag = false;
                    break;
                }
            }
        }
        
        if (flag)
        {
            yes
        }else
        {
            no
        }
        
        
        
    }
    
    return 0;
}