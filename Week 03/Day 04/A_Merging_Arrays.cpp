// Created by @brownspy1 on 2024-11-15 Time:17-08-59
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main(){
    fast
    int n,m;cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    int l = 0, r = 0;
    vector<int> ans;
    while (l < a.size() && r < b.size())
    {
        if (a[l] <= b[r])
        {
            ans.push_back(a[l]);
            l++;
        }else
        {
            ans.push_back(b[r]);
            r++;
        }
        
        
    }
    while (l < a.size())
    {
        ans.push_back(a[l]);
        l++;
    }
    while (r < b.size())
    {
        ans.push_back(b[r]);
        r++;
    }
    

    for (auto &&i : ans)
    {
        cout<<i<<" ";
    }
    
    
    return 0;
}
