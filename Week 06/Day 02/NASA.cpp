// Created by @brownspy1 on 2025-01-03 Time:21-51-34
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
vector<int> allPalindrom;
bool itsPalindrome(int a){
    string s = to_string(a),b = to_string(a);
    reverse(all(b));
    return s == b;
}

int main(){
    fast
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int ans = 0;
        for (int i = 0; i < n-1; i++)
        {
            int Xor = v[i]^v[i+1];

            if (itsPalindrome(Xor))
            {
                cout<< (v[i] ^ v[i+1])<<endl;
                ans++;
            }
            
        }
        // cout<<ans<<endl;
        
        
    }
    return 0;
}