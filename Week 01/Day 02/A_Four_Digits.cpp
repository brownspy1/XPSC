// Created by @brownspy1 on 2024-10-28 Time:18-53-03
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES";
#define no cout<<"NO";
#define ll long long int;
#define all(x) x.begin(), x.end()
int main(){
    fast
    int num;cin>>num;
    string a = to_string(num);
    if (a.size() == 1)
    {
        cout<<"000"<<a;
    }else if (a.size() == 2)
    {
        cout<<"00"<<a;
    }else if (a.size() == 3)
    {
        cout<<"0"<<a;
    }else
    {
        cout<<a;
    }
    

    return 0;
}
