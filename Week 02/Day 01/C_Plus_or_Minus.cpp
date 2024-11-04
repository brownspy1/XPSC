// Created by @brownspy1 on 2024-11-03 Time:19-49-49
#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int;
#define all(x) x.begin(), x.end()
int main()
{
    fast int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a+b) == c)
        {
            cout<<'+'<<endl;
        }else if ((a-b) == c)
        {
            cout<<'-'<<endl;
        }
        
        
    }

    return 0;
}
