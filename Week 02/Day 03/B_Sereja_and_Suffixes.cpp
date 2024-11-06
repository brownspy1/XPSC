// Created by @brownspy1 on 2024-11-06 Time:16-48-34
#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define yes cout << "YES";
#define no cout << "NO";
#define ll long long
#define all(x) x.begin(), x.end()
int main()
{
    fast;
    int t, m;
    cin >> t >> m;
    vector<int> ar(t + 1);
    for (int i = 1; i <= t; i++)
    {
        cin >> ar[i];
    }
    vector<int> ans(t + 1);
    set<int> st;
    for (int i = t; i >= 1; i--)
    {
        st.insert(ar[i]);
        ans[i] = st.size();
    }
    for (int i = 1; i <= m; i++)
    {
        int q;
        cin >> q;
        cout << ans[q] << '\n';
    }

    return 0;
}
