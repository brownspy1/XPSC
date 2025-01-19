

// Created by @brownspy1 on 2025-01-19 Time:21-54-43
#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define pb push_back
#define all(v) v.begin(), v.end()
#define clr(arr, val) memset(arr, val, sizeof(arr))
#define loop(i, n) for (int i = 0; i < n; i++)
#define pii pair<int, int>

const int N = 2e5 + 5;

bool mark2[N], mark[N];
int cnt, cnt2, col[N];
vector<int> adj1[N], adj2[N];
map<pii, int> mp;

void dfs2(int u)
{
    col[u] = cnt;
    mark2[u] = true;
    for (int v : adj2[u])
        if (!mark2[v])
            dfs2(v);
}

void dfs(int u)
{
    mark[u] = true;
    for (int v : adj1[u])
        if (!mark[v] && mp[{u, v}] != 1)
            dfs(v);
}

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
    int n, m1, m2;
    cin >> n >> m1 >> m2;

    cnt = cnt2 = 0;
    mp.clear();
    clr(mark, false);
    clr(mark2, false);

    loop(i, n)
    {
        adj1[i].clear();
        adj2[i].clear();
    }

    loop(i, m1)
    {
        int u, v;
        cin >> u >> v;
        u--, v--;
        adj1[u].pb(v);
        adj1[v].pb(u);
    }

    loop(i, m2)
    {
        int u, v;
        cin >> u >> v;
        u--, v--;
        adj2[u].pb(v);
        adj2[v].pb(u);
    }

    loop(i, n) if (!mark2[i])
    {
        cnt++;
        dfs2(i);
    }

    int ans = 0;
    loop(i, n)
    {
        for (int v : adj1[i])
        {
            if (col[i] != col[v])
            {
                ans++;
                mp[{i, v}] = 1;
            }
        }
    }

    loop(i, n) if (!mark[i])
    {
        cnt2++;
        dfs(i);
    }

    cout << ans / 2 + (cnt2 - cnt) << "\n";
}
