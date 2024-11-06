// Created by @brownspy1 on 2024-11-06 Time:19-25-04
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES";
#define no cout<<"NO";
#define ll long long int;
#define all(x) x.begin(), x.end()
int main(){
    fast
    int n;cin>>n;
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        ms.insert(x);
    }
    int ans = 0, solved = 1;
    while (!ms.empty())
    {
        auto find = ms.lower_bound(solved);
        if (find != ms.end())
        {
            ans++;
            ms.erase(find);
        }else
        {
            break;
        }
        
        solved++;
    }
    cout<<ans;
    
    return 0;
}
