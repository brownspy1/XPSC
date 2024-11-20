// Created by @brownspy1 on 2024-11-20 Time:21:22:18
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
bool isPossible(int maxDiff, vector<int> &arr, int n, int k)
{
    int modifications = 0;
    int minVal = arr[0] - maxDiff;
    int maxVal = arr[0] + maxDiff;

    for (int i = 1; i < n; i++)
    {
        int newMin = arr[i] - maxDiff;
        int newMax = arr[i] + maxDiff;

        if (newMin > maxVal || newMax < minVal)
        {
            modifications++;
            minVal = newMin;
            maxVal = newMax;
        }
        else
        {
            minVal = max(minVal, newMin);
            maxVal = min(maxVal, newMax);
        }
    }

    return modifications <= k;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int low = 0, high = 1e9, ans = 1e9;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (isPossible(mid, arr, n, k))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << ans << "\n";
}
