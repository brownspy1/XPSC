// Created by @brownspy1 on 2024-10-29 Time:21-42-31
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES";
#define no cout<<"NO";
#define ll long long int;
#define all(x) x.begin(), x.end()
const int dollar = 100;
int main(){
    fast
    int t;cin>>t;
    while (t--)
    {
        int dl ;cin>>dl;
        int ferot = dollar - dl;
        int note = ferot/10;
        int final_amount = note*10;
        cout<<final_amount<<endl;
    }
    
    return 0;
}
