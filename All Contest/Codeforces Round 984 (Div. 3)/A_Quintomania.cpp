// Created by @brownspy1 on 2024-11-02 Time:20:37:43
//unsolved
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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        
        cin >>v[i];
    }
    bool flag = true;
    for (int i = 0; i < n-1; i++)
    {
        int ans = abs(v[i] - v[i + 1]);
        if (ans != 5 && ans != 7)
        {
            flag = false;
            break;
        }
    }
    if (flag)
        yes;
    else
        no;
}
