// Created by @brownspy1 on 2024-11-09 Time:15-29-13
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES";
#define no cout<<"NO";
#define ll long long
#define all(x) x.begin(), x.end()
int main(){
    fast
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<ll> v(n); for(int i = 0; i<n; i++) cin>>v[i];
        map<ll,int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
            if (mp[v[i]] >=2 )
            {
               ll  value = v[i];
               while (true)
               {
                int total = mp[value];
                 if (mp[value] < 2)
                 {
                    break;
                 }
                mp.erase(value);
                for (int k = 0; k < total/2; k++)
                {
                    mp[value*2LL]++; // LL karon aikane Long long a nita hobe
                }
                if (total%2 != 0)
                {
                    mp[value]++;
                }
                value *=2;
               }
               
            }
            cout<<mp.size()<<" ";
            
        }cout<<'\n';
        

        
    }
    
    return 0;
}
