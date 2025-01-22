// Created by @brownspy1 on 2025-01-22 Time:19-06-55
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
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> arr(n);

        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        ll rl = r - l + 1;
        r = min(r, n);
        l = max(l, 1LL);
        ll start = l - 1;

        rl = min(rl, r);
        rl = min(rl, n - start);

        vector<ll> lp, rp;
        ll i = 0;
        while (i < r)
        {
           lp.push_back(arr[i]);
           i++;
        }
        i = start;
        
        while (i < n)
        {
            rp.push_back(arr[i]);
            i++;
        }
        

        sort(all(lp));
        sort(all(rp));

        ll ls = 0, rs = 0;
        i = 0;
        while (i < rl)
        {
            if (i < lp.size()) {
                ls += lp[i];
            }
            if (i < rp.size()) {
                rs += rp[i];
            }
            i++;
        }
        

        cout << min(ls, rs) <<endl;
        }
    
    return 0;
}