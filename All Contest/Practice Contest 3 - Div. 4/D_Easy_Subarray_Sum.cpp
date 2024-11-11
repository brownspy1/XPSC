// Created by @brownspy1 on 2024-11-11 Time:22-29-12
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int start = -1,ending = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                start = i;
                break;
            }
            
        }
        for (int i = n-1; i >0; i--)
        {
            if (v[i] > 0)
            {
                ending = i;
                break;
            }
        }
        
        if (start == -1)
        {
            cout<<0<<endl;
        }else
        {
            int neg = 0;
            for (int i = start; i <= ending; i++)
            {
                if (v[i] < 0)
                {
                    neg++;
                }
                
            }
            cout<<neg<<endl;
            
        }
        
        
        
        
    }
    
    return 0;
}
