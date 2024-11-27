// Created by @brownspy1 on 2024-11-27 Time:11:21:06
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> v;
    ll sum = 0, minimum = 0;
    int r = 0;
    while (r < n)
    {
        ll R = n - r - 1;
        ll L = r;
        if (s[r] == 'R')
        {
            if (R < L)
            {
                minimum++;
                sum += L;
                v.push_back(L - R);
            }
            else
            {
                sum += R;
            }
        }
        else
        {
            if (L < R)
            {
                minimum++;
                sum += R;
                v.push_back(R - L);
            }
            else
            {
                sum += L;
            }
        }
        r++;
    }
    vector<ll> ans(n+1);
    for (int i = minimum; i <= n; i++)
    {
        ans[i] = sum;
    }
    sort(all(v), greater<int>());
    for (int i = minimum - 1; i >= 1; i--)
    {
        sum -= v.back();
        v.pop_back();
        ans[i] = sum;
    }

    for(int i = 1; i <=n; i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}
