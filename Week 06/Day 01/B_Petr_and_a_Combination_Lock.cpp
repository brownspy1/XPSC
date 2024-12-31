// Created by @brownspy1 on 2024-12-28 Time:17-34-15
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
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    bool flag = false;
    
    for (int mask = 0; mask < (1<<n); mask++)
    {
        int sum = 0;
        for (int k = n-1; k >=0; k--)
        {
            if ((mask >> k)&1)
            {
                sum+=v[k];
            }else
            {
                sum-=v[k];
            }
        }

        if (sum%360==0)
        {
            flag = true;
            break;
        }

    }
    
    if (flag)
    {
        yes
    }else
    {
        no 
    }

    return 0;
}