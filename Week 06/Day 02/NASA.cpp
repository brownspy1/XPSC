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
const int mxInt = (1<<15);
vector<int> allPalindrome;
bool itsPalindrome(int a){
    string s = to_string(a),b = s;
    reverse(all(b));
    return s == b;
}

void palindrome(){
    for (int i = 0; i < mxInt; i++)
    {
        if (itsPalindrome(i))
        {
            allPalindrome.push_back(i);
        }
        
    }
    
}
int main(){
    fast
    palindrome();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n),cnt(mxInt+1);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            cnt[v[i]]++;
        }
        ll ans = n;
        for (int i = 0; i < n; i++)
        {
            for (int  num: allPalindrome)
            {
                int curr = (v[i]^num);
                ans+=cnt[curr];
            }
        }
        cout<<ans/2<<endl;
        
        
    }
    return 0;
}