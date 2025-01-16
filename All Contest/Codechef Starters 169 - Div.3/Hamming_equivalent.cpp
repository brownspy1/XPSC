// Created by @brownspy1 on 2025-01-15 Time:21-10-13
#include <bits/stdc++.h>
using namespace std;

#define pub(X) push_back(X)
#define pob pop_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define pb push_back
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

int bit_count(int x) {
    int count = 0;
    while (x) {
        count += (x & 1);
        x >>= 1;
    }
    return count;
}

bool sorted(vi& arr) {
    map<int, vi> bit_groups;
    int i = 0;
    while (i < sz(arr)) {
        int set_bits = bit_count(arr[i]);
        bit_groups[set_bits].pb(i);
        i++;
    }

    for (auto& group : bit_groups) {
        vi values;
        int j = 0;
        while (j < sz(group.second)) {
            values.pb(arr[group.second[j]]);
            j++;
        }
        sort(all(values));
        j = 0;
        while (j < sz(group.second)) {
            arr[group.second[j]] = values[j];
            j++;
        }
    }

    i = 1;
    while (i < sz(arr)) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
        i++;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    int i = 0;
    while (i < n) {
        cin >> arr[i];
        i++;
    }
    if (sorted(arr)) {
        yes;
    } else {
        no;
    }
}
