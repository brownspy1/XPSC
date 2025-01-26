// Created by @brownspy1 on 2025-01-26 Time:21-00-11
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define all(x) x.begin(), x.end()
#define loop(i, n) for (int i = 0; i < n; i++)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define inputArray(arr, n) loop(i, n) cin >> arr[i];

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    inputArray(a, n);

    loop(i, n) {
        if (a[i] <= i * 2 || a[i] <= (n - i - 1) * 2) {
            NO;
            return;
        }
    }
    YES;
}

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
