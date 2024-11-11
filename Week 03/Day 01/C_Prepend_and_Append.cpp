// Created by @brownspy1 on 2024-11-11 Time:13-07-15
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
        string binary;cin>>binary;
        int l = 0, r = n-1;
        int ans = 0;
        while (l < r)
        {
            if (binary[l] != binary[r] )
            {
                ans+=2;
                l++;
                r--;
            }else
            {
                break;
            }
            

        }
        int final = binary.size() - ans;
        cout<<final<<endl;
        
    }
    
    return 0;
}
