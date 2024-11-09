// Created by @brownspy1 on 2024-11-09 Time:18-05-01
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
        map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            mp[x]++;
        }
        priority_queue<int> pq;
        for (auto [x,y] : mp)
        {
            pq.push(y);
        }
        while (!pq.empty())
        {
            if (pq.size() < 2)
            {
                break;
            }
            int x,y;
            x = pq.top();pq.pop();
            y = pq.top();pq.pop();
            x--,y--;
            if (x>=1)
            {
                pq.push(x);
            }
            if (y>=1)
            {
                pq.push(y);
            }

        }
        int ans = 0;
        while (!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
        }
        cout<<ans<<endl;

    }
    
    return 0;
}
