// Created by @brownspy1 on 2024-11-10 Time:23-32-29
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main(){
    fast
    double win,dro,lose;cin>>win>>dro>>lose;
    double total_game = 4 - (win+dro+lose);
    double my_score = 0,opponent_score = 0;
    my_score = ((win*1)+(dro*0.5))+total_game;
    opponent_score = (lose*1)+(dro*0.5);
    if (my_score > opponent_score)
    {
        yes
    }else
    {
        no
    }
    
    

    return 0;
}
