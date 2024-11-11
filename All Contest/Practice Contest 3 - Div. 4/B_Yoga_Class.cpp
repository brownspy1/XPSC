// Created by @brownspy1 on 2024-11-11 Time:21-05-15
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
        int H,T1,T2;cin>>H>>T1>>T2;
        int A = 0; int B = 0;
        if (H%2 == 0)
        {
            int a = H*T1,b = (H/2)*T2;
            cout<<max(a,b)<<endl;
        }else
        {
            if (H == 1)
            {
                cout<<H*T1<<endl;
            }else
            {
                int x = H-1;
                int a = x*T1,b = (x/2)*T2; 
                int ans = max(a,b)+T1;
                cout<<ans<<endl;
            }
        }
    }
    
    return 0;
}
