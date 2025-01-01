// Created by @brownspy1 on 2025-01-01 Time:21-25-08
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
         ll n, st = 0;
    cin >> n;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        if (i == 0) st = v[i];
    }

    sort(v.begin(), v.end());

    if (st == v[0]) cout << st + (v[1] - st) / 2 << endl;
    else if (st == v[n - 1]) cout << 1000000 - st + 1 + (st - v[n - 2]) / 2 <<endl;
    else {
        ll a = st - (st - v[lower_bound(v.begin(), v.end(), st) - v.begin() - 1]) / 2;
        ll b = st + (v[lower_bound(v.begin(), v.end(), st) - v.begin() + 1] - st) / 2;
        cout << b - a + 1 << endl;
    }
    }
    
    return 0;
}