// Created by @brownspy1 on 2025-01-22 Time:20-36-45
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
        long long X, N;
        cin >> N >> X;
        vector<long long> H(N);
        for (auto &h : H) cin >> h;

        sort(all(H), greater<long long>());
        long long at = 0;
        for (int i = 0; i < N; ++i) {
            at = max(at, H[i] + X * i);
        }

        cout << at << '\n';
    }
    
    return 0;
}