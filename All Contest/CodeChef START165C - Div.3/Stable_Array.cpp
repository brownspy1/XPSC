// Created by @brownspy1 on 2025-02-04 Time:18-55-26
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
    int t; cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin>>v[i];
        int cnt = 0, mx = 0;
        for (int i = n-1; i >= 0; i++)
        {
            if (v[i] > v[i-1])
            {
                int j = i-1;
                while (j >= 0 && v[j] < v[i])
                {
                    cnt++;j--;
                }
                mx = max(mx,cnt);
                cnt = 0;
                i = j+1;
            }
            
        }
        cout<<mx<<endl;
        
    }
    
    return 0;
}