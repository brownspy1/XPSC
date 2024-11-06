// Created by @brownspy1 on 2024-11-06 Time:20-44-10
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long  
#define all(x) x.begin(), x.end()
int main(){
    fast
    int t; cin >> t;
    while (t--)
    {
        int n, r; cin >> n >> r;
        vector<int> a(n), b(n);
        
        int winCount = 0;
        vector<int> votesNeeded; 
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (a[i] > b[i]) {
                winCount++; 
            } else {
                votesNeeded.push_back(b[i] - a[i] + 1); 
            }
        }
        
      
        if (winCount > n / 2) {
            yes
            continue;
        }
        
       
        sort(all(votesNeeded));
        
        for (int votes : votesNeeded) {
            if (r >= votes) { 
                r -= votes;
                winCount++;
            }
            if (winCount > n / 2) {
                yes
                break;
            }
        }
        
        if (winCount <= n / 2) {
            no
        }
    }
    return 0;
}
