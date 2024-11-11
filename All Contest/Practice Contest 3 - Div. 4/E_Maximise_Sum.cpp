// Created by @brownspy1 on 2024-11-11 Time:22-54-48
#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main()
{
    fast int t;
    cin >> t;
    while (t--)
    {
        int n;cin>>n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin>>ar[i];
        }
        int count = 0;
        for (int i = 0; i <n; i++)
        {
            if (ar[i] < 0)
            {
                count++;
                ar[i] = ar[i]*-1;
            }
            
        }
        
        if (count %2 == 0)
        {
            ll sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum+=ar[i];
            }
            cout<<sum<<endl;
        }else
        {
            ll sum = 0;
            sort(ar,ar+n);
            ar[0] = ar[0]*-1;
            for (int i = 0; i < n; i++)
            {
                sum+=ar[i];
            }
            cout<<sum<<endl;
            
        }
        
        
        
        
    }

    return 0;
}
