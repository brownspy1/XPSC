// Created by @brownspy1 on 2024-11-12 Time:17-43-55
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main(){
    fast
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    ll ans = 0;
    int l = 0, r = 0;
    while (l < n && r < m)
    {
        int count1 = 0, count2 = 0,curr = a[l];
        while (l < n && a[l] == curr)
        {
            l++;count1++;
        }
        while (r < m && curr > b[r])
        {
            r++;
        }
        while (r < m && curr == b[r])
        {
            count2++; r++;
        }
        ans += (1LL*count1*count2);

    }
    cout<<ans<<endl;
    
    
    return 0;
}
