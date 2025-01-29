// Created by @brownspy1 on 2025-01-29 Time:20-38-52
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
    int T;
    cin >> T;  

    while (T--) {
        int M, K;
        cin >> M >> K;

        string S;
        cin >> S;

        
        int swish_count = 0;
        for (char c : S) {
            if (c == 'S') swish_count++;
        }

        
        if (swish_count >= K) {
           
            cout << M << endl;
        } else {
           
            int remaining_swishes = K - swish_count;
            int N = M + remaining_swishes-1;

            
            cout << N << endl;
        }
    }
    return 0;
}