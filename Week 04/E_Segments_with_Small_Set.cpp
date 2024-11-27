// Created by @brownspy1 on 2024-11-26 Time:21-57-28
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
    int n, k;cin>>n>>k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int l = 0, r = 0,count = 0;
    ll ans = 0;
    unordered_map<int,int> ump;
   while (r < n)
   {
        ump[v[r]]++;
        while (ump.size() > k)
        {
            ump[v[l]]--;
            if (ump[v[l]] == 0)
            {
                ump.erase(v[l]);
            }
            l++;
            
        }
        ans += r-l+1;
        r++;
    
   }
   
    cout<<ans<<endl;
    
    return 0;
}
