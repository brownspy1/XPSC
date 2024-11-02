// Created by @brownspy1 on 2024-11-02 Time:21:45:07
//unsolved
#include <bits/stdc++.h>
using namespace std;

#define pub(X) push_back(X)
#define pob pop_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"

const int MOD = 1e9+7;
const int INF = INT_MAX;
const int NINF = INT_MIN;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}


void solve() {
    int n, k;
        cin >> n >> k;
        map<int, vector<int>> brands;

        for (int i = 0; i < k; i++) {
            int bi, ci;
            cin >> bi >> ci;
            brands[bi].push_back(ci);
        }

        priority_queue<int> maxPrices;
        for (auto [brand,price] : brands) {
            sort(price.rbegin(), price.rend());
            for (int taka : price) {
                maxPrices.push(taka); 
            }
        }

        long long totalEarned = 0;
        for (int i = 0; i < n && !maxPrices.empty(); i++) {
            totalEarned += maxPrices.top();
            maxPrices.pop();
        }

        cout << totalEarned << endl;
}
