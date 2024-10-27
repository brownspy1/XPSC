// Created by @brownspy1 on 2024-10-27 Time:18-26-29
#include <bits/stdc++.h>
using namespace std;
int main(){
    int A,B,C;
    cin>>A>>B>>C;
    bool flg = true;
    for (int i = A; i <= B; i++)
    {
        if (i%C == 0)
        {
            cout<<i;
            flg = false;
            return 0;
        }
        
    }
    if (flg) cout<<-1;
    
    return 0;
}