// Created by @brownspy1 on 2024-11-18 Time:10-23-54
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
        int n;cin>>n;
        string bite ;cin>>bite;
        int  l = 0, r = 0, ans1 = 0,ans2 = 0;
        bool flag = false;
        while (r < n)
        {
             
            if (bite[l] == '1')
            {
               ans1++;
            }else if (bite[l] == '0')
            {
                ans2++;
            }
            r = l;
            while (r < n && bite[r] == bite[l])
            {
                r++;
            }
            l = r;

        }
        int as = min(ans1,ans2);
        cout<<as<<endl;
        
    }
    
    return 0;
}
