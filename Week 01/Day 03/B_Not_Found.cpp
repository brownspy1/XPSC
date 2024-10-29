// Created by @brownspy1 on 2024-10-28 Time:22-34-01
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES";
#define no cout<<"NO";
#define ll long long int;
#define all(x) x.begin(), x.end()
int main(){
    fast
    string text;cin>>text;
    int frq[26] = {0};
    for (int i: text)
    {
        frq[i-'a']++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (frq[i] < 1)
        {
            cout<<char(i+97);
            return 0;
        }
        // cout<<char(i+97)<<" : "<<frq[i]<<endl;
    }
    cout<<"None"<<endl;
    
    
    return 0;
}
