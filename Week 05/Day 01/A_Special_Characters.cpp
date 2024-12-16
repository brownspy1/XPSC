// Created by M.Mahadi on 2024-12-13 Time:23-44-46
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        if (n%2)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        int s = n/2;
        cout<<"YES"<<endl;
        for (int i = 1; i <= s; i++)
        {
            if (i%2)
            {
                char a = 64+i;
                cout<<a<<a;
            }else
            {
                char a = 64+i;
                cout<<a<<a;
            }

        }cout<<endl;
        
        
    }
    
    return 0;
}