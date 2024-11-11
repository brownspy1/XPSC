// Created by @brownspy1 on 2024-11-11 Time:21-19-48
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
        int song, playlist, language;
        cin >> song >> playlist >> language;
        map<int, multiset<int, greater<int>>> app;
        for (int i = 0; i < song; i++)
        {
            int minit, lang;
            cin >> minit >> lang;
            app[lang].insert(minit);
        }
        if (app[language].size() < playlist)
        {
            cout << -1 << endl;
            continue;
        }
        ll ans = 0;
        auto it = app[language].begin();
        while (playlist --)
        {
            ans += *it;
            it++;
        }
        cout<<ans<<endl;
        
    }

    return 0;
}
