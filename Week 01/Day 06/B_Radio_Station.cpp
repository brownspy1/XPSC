// Created by @brownspy1 on 2024-11-02 Time:18-57-16
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES";
#define no cout<<"NO";
#define ll long long int;
#define all(x) x.begin(), x.end()
int main(){
    fast
    int s,c;cin>>s>>c;
    map<string,string> server;
    for (int i = 0; i < s; i++)
    {
        string ip,name;
        cin>>name>>ip;
        server[ip] = name;
    }
   
    for (int i = 0; i < c; i++)
    {
        string ip,name;
        cin>>name>>ip;
        ip.pop_back();
        cout<<name<<" "<<ip<<"; #"<<server[ip]<<endl;
    }
    
    return 0;
}
