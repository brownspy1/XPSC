// Created by @brownspy1 on 2024-12-05 Time:22:12:17
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
    int n;
    cin >> n;
    vector<ll> a(n);
    ll total = 0, sum_odd = 0, sum_even = 0;
    int count_odd = (n + 1) / 2, count_even = n / 2;
    int i = 0;
    while (i < n) {
        cin >> a[i];
        total += a[i];
        if ((i + 1) % 2) sum_odd += a[i];
        else sum_even += a[i];
        i++;
    }
    if (total % n != 0) {
        cout << "NO\n";
        return;
    }
    ll target = total / n;
    if (sum_odd == target * (ll)count_odd && sum_even == target * (ll)count_even) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}