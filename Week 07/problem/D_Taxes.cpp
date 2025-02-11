// Created by @brownspy1 on 2025-02-11 Time:22-05-27
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
bool isprime(ll num){
    if(num == 1){
        return false;
    }
    for (int i = 2; i*i <= num; i++)
    {
        if (num%i == 0)
        {
            return false;
        }
        
    }
    return true;
    
}
int main(){
    fast
    int n;cin>>n;
    if (isprime(n))
    {
        cout<<1<<endl;
    }else if(n%2==0)
    {
        cout<<2<<endl;
    }else
    {
        if (isprime(n-2))
        {
            cout<<2<<endl;
        }else if((n-3)%2==0)
        {
            cout<<3<<endl;
        }
        
        
    }
    
    
    
    return 0;
}