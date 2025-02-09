// Created by @brownspy1 on 2025-02-09 Time:21-04-15
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
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<ll> a(n), b(m);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        sort(b.begin(), b.end());

        ll L = -1000000000000000000LL; 
        bool possible = true;
 
        for (int i = 0; i < n; i++){
            ll candidate1 = (a[i] >= L ? a[i] : LLONG_MAX);
 
            ll candidate2 = LLONG_MAX;
            ll target = L + a[i];
            auto it = lower_bound(b.begin(), b.end(), target);
            if(it != b.end()){
                candidate2 = (*it) - a[i];
            }
 
            ll candidate = min(candidate1, candidate2);
            if(candidate == LLONG_MAX){
                possible = false;
                break;
            }
            L = candidate;
        }
 
        cout << (possible ? "YES" : "NO") << "\n";
    }
    return 0;
}