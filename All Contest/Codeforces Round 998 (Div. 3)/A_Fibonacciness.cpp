// Created by @brownspy1 on 2025-01-19 Time:20-41-44
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
    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        int mx = 0;

        for (int a3 = -200; a3 <= 200; a3++) {
            int cnt = 0;
            if (a3 == a1 + a2) cnt++; 
            if (a4 == a2 + a3) cnt++; 
            if (a5 == a3 + a4) cnt++;
            mx = max(mx, cnt);
        }

        cout << mx << '\n';
    }
    return 0;
}

