// Created by @brownspy1 on 2024-12-18 Time:02-24-30
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
        int n,m;cin>>n>>m;
        vector<int> v(n);

        if (n > m || n%2 == 0 && m%2==1)
        {
            cno
            continue;
        }
        
        int sum = 0;
        if (n%2 == 0 && m%2 == 0)
        {
            cyes
            for (int i = 0; i < n-2; i++){
                int x = m/n;
                v[i] = x;
                sum+=x;
            }
            v[n-2] = (m-sum)/2;
            v[n-1] = v[n-2];
        }else if (n%2 == 1 && m%2 == 0)
        {
            cyes
            for (int i = 0; i < n-1; i++)
            {
                v[i] = 1;
                sum+=1;
            }
            v[n-1] = m-sum;
        }else if (n%2 == 1 && m%2 == 1)
        {
            cyes
            for (int i = 0; i < n-1; i++)
            {
                v[i] = 1;
                sum+=1;
            }
            v[n-1] = m-sum;

        }
        for (int i = 0; i < n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}