// Created by @brownspy1 on 2025-01-22 Time:18-15-35
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
        int a, b;
        cin >> a >> b;
        cout << (a == 1 && b == 1 ? 1 : b - a) << endl;
    }
    return 0;
}