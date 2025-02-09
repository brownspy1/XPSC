// Created by @brownspy1 on 2025-02-09 Time:20-58-15
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
        int n, m;
        cin >> n >> m;
        vector<ll> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        

        ll taxModifier;
        cin >> taxModifier;
        

        long long prevSelected = -numeric_limits<ll>::max();
        bool canSort = true;

        for (int i = 0; i < n; ++i) {
            long long noChange = arr[i];
            long long withChange = taxModifier - arr[i];
            
            
            long long chosen;
            if (noChange <= withChange) {
                if (noChange >= prevSelected)
                    chosen = noChange;
                else if (withChange >= prevSelected)
                    chosen = withChange;
                else {
                    canSort = false;
                    break;
                }
            } else {  
                if (withChange >= prevSelected)
                    chosen = withChange;
                else if (noChange >= prevSelected)
                    chosen = noChange;
                else {
                    canSort = false;
                    break;
                }
            }
            
            prevSelected = chosen;
        }
        
        cout << (canSort ? "YES" : "NO") << "\n";
    }
    return 0;
}