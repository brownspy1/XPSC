// Created by @brownspy1 on 2024-11-20 Time:20:35:10
#include <bits/stdc++.h>
using namespace std;

#define pub(X) push_back(X)
#define pob pop_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes" << endl;
#define cno cout << "No" << endl;

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
    int n, m;
    cin >> n >> m;
    vector<int> donut(n);
    vector<int> customer(m);
    for (int i = 0; i < n; i++)
    {
        cin >> donut[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> customer[i];
    }

    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int type = customer[i];
        if (donut[type - 1] > 0)
        {

            donut[type - 1]--;
        }
        else
        {

            ans++;
        }
    }

    cout<<ans<<endl;
}
