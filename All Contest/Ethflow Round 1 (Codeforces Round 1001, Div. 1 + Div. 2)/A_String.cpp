// Created by @brownspy1 on 2025-01-26 Time:20-36-56
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
     while (t--) {
        string s;
        cin >> s;

        int ones_count = 0;
        bool in_block = false;

        for (char c : s) {
            if (c == '1') {
                ones_count++;
                if (!in_block) {
                    in_block = true;
                }
            } else {
                in_block = false;
            }
        }

        cout << ones_count <<endl;
    }
    
    return 0;
}