// Created by @brownspy1 on 2025-01-22 Time:20-33-08
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
        int N, X;
        cin >> N >> X; 
        
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i]; 
        }
        
       
        int totalWater = accumulate(A.begin(), A.end(), 0);
        
        
        int result = (totalWater + X - 1) / X; 
        
        cout << result << endl;
    }
    
    return 0;
}