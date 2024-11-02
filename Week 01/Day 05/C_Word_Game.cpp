// Created by @brownspy1 on 2024-11-02 Time:12:30:11
#include <bits/stdc++.h>
using namespace std;

#define pub(X) push_back(X)
#define pob pop_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"

const int MOD = 1e9 + 7;
const int INF = INT_MAX;
const int NINF = INT_MIN;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve();

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

void solve()
{
    int n, m = 3;
    cin >> n;
    map<string, vector<int>> mp;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string x;
            cin >> x;
            mp[x].push_back(i);
        }
    }
    vector<int> ans(3);
    for (auto [x, y] : mp)
    {

        if (y.size() == 1)
        {
            ans[y[0]] += 3;
        }
        else if (y.size() == 2)
        {
            ans[y[0]]++;
            ans[y[1]]++;
        }
    }
    for (auto &&i : ans)
    {
        cout<<i<<" ";
    }cout<<endl;
    
}
