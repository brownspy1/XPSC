// Created by @brownspy1 on 2025-02-03 Time:22-58-14
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
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        string ans ;
        for (int i = 0; i < n; i++)
        {
            int des = min((10+i),n),curr = s[i]-'0',idx = i;
            for (int j = i; j < des; j++)
            {
                int now = s[j]-'0';
                if ((now - (j-i))> curr)
                {
                    idx = j;
                    curr = now - ( j-i );
                }
            }
            while (idx > i)
            {
                swap(s[idx],s[idx-1]);
                idx--;
            }
            ans.push_back(char(curr+'0'));
        }
        cout<<ans<<endl;

    }
    
    return 0;
}