// Created by @brownspy1 on 2024-10-28 Time:17-38-31
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
    fast
        // pair--------------------
        //  pair<string , int> p = make_pair("Mahadi",743678);
        //  pair<string , int> p = {"Mahir",74556};
        //  cout<<p.first<<" "<<p.second<<endl;
        //  auto [name,roll] = p;
        //  cout<<name<<" "<<roll<<endl;
        //  int n;cin>>n;
        //  pair<string,int> p[n];
        //  for (int i = 0; i < n; i++)
        //  {
        //      cin>>p[i].first>>p[i].second;
        //  }
        //  for (auto [name,roll] : p)
        //  {
        //      cout<<name<<" "<<roll<<endl;
        //  }

        // tuple--------------------
        int n;
    cin >> n;
    tuple<string, int> tu[n];
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        int roll;
        cin >> roll;
        get<0>(tu[i]) = name;
        get<1>(tu[i]) = roll;
    }
    for (auto [name, roll] : tu)
    {
        cout << name << " " << roll << endl;
    }

    return 0;
}
