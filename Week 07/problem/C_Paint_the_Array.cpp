// Created by @brownspy1 on 2025-02-09 Time:00-10-35
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

ll GCD(int a, vector<ll> v) {
    ll g = 0;
    for (int i = a; i < v.size(); i += 2) {
        g = __gcd(g, v[i]);
    }
    return g;
}

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll g1 = GCD(0, v);
    ll g2 = GCD(1, v);
    bool flag = true;
    for (int i = 1; i < n; i += 2) {
        if (v[i] % g1 == 0) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << g1 << endl;
    } else {
        flag = true;
        for (int i = 0; i < n; i += 2) {
            if (v[i] % g2 == 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << g2 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}
