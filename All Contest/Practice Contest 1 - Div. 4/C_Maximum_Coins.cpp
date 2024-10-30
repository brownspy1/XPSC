// Created by @brownspy1 on 2024-10-29 Time:21-32-38
#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define yes cout << "YES";
#define no cout << "NO";
#define ll long long int;
#define all(x) x.begin(), x.end()
int main()
{
    fast int t;
    cin >> t;
    while (t--)
    {
        /*int n,x;
        cin>>n>>x;
        int coins=0;

        for (int i=n; i>n-x; i--) 
        {
            coins+=pow(2,i);
        }

        for (int i=1; i<=n-x; i++)
        {
            coins-=pow(2,i);
        }
        cout<<coins<<endl;*/
        int Tgame, wgame;
        cin >> Tgame >> wgame;
        int total_coin = 0;
        for (int i = Tgame; i > Tgame-wgame; i--)
        {
            total_coin += 2 * i;
        }
        for (int i = 1; i <= Tgame-wgame; i++)
        {
            total_coin -= 2 * i;
        }
        

        cout << total_coin << endl;
    }

    return 0;
}
