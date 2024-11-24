// Created by @brownspy1 on 2024-11-24 Time:19-24-53
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
        int n,c;cin>>n>>c;
        vector<int> fc(n);
        for (int i = 0; i < n; i++)
        {
            cin>>fc[i];
        }
        for (int i = 1; i <= n; i++)
        {
            fc[i-1] +=i;
            
        }
        int ans = 0;
        sort(all(fc));
        for (auto &&i : fc)
        {
            if (i <= c)
            {
                ans++;
                c-=i;
            }
            
        }
        cout<<ans<<endl;
        
        

        
    }
    
    return 0;
}
