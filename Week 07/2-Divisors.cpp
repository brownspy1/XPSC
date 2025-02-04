// Created by M.Mahadi on 2025-02-04 Time:22-40-16
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
//O(n) time complexity
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n%i == 0)
    //     {
    //         cout<<i<<endl;
    //     }
        
    // }
//O(sqrt(n)) time complexity

vector<int> v;
for (int i = 1; i*i < n; i++)
{
    if(n%i == 0){
       v.push_back(i);
       cout<<i<<" X ";
        if (i!= n/i)
        {
            v.push_back(n/i);
            cout<<n/i<<endl;
        }
        
    }
    
}
    return 0;
}