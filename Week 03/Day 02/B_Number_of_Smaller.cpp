// Created by @brownspy1 on 2024-11-11 Time:20-46-28
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main(){
    fast
    int a,b;cin>>a>>b;
    vector<int> va(a);
    vector<int> vb(b);
    for (int i = 0; i < a; i++)
    {
        cin>>va[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin>>vb[i];
    }
    vector<int> v;
    int l = 0, w = 0;
    int ans = 0;
    while (w < b)
    {
        if (l < b && va[l] < vb[w])
        {
            ans ++;
            l++;
        }else
        {
            v.push_back(ans);
            w++;
        }

    }
    for (auto &&i : v)
    {
        cout<<i<<" ";
    }cout<<'\n';
    
    
    return 0;
}
