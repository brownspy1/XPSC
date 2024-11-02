// Created by @brownspy1 on 2024-11-01 Time:23-02-45
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES";
#define no cout<<"NO";
#define ll long long int;
#define all(x) x.begin(), x.end()
int main(){
    fast
    map<string,string> ans,has;
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        string a,b;cin>>a>>b;
        if (has.find(a) != has.end())
        {
            string s = has[a];
            ans[s] = b;
            has.erase(a);
            has[b] = s;
        }else
        {
            ans[a] = b;
            has[b] = a;
        }

        
    }
    cout<<ans.size()<<endl;
    for (auto [x,y] : ans)
    {
        cout<<x<<" "<<y<<endl;
    }
    
    return 0;
}
