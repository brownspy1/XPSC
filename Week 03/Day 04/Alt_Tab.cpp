// Created by @brownspy1 on 2024-11-15 Time:21-22-31
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main(){
    fast
    int n;cin>>n;
    stack <string> word;
    unordered_set<string> ss ;
    vector<string> ans;
    while (n--)
    {
        string s;cin>>s;
        word.push(s);
    }
    while (!word.empty())
    {
        string top = word.top();
        word.pop();
        if (ss.find(top) == ss.end())
        {
            ss.insert(top);
            ans.push_back(top);
        }
        
    }

    for (auto i : ans)
    {
        cout<<i.substr(i.size()-2);
    }

    return 0;
}
