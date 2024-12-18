// Created by @brownspy1 on 2024-12-18 Time:21-48-16
#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define cyes cout << "Yes" << endl;
#define cno cout << "No" << endl;
#define ll long long
#define all(x) x.begin(), x.end()

void solve() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<int> values, indexs;
    values.push(arr[0]);
    indexs.push(0);

    int max_diff = 0;

    for (int i = 1; i < n; i++) {
        while (!values.empty() && values.top() < arr[i]) {
            values.pop();
            indexs.pop();
        }

        if (!values.empty()) {
            int topIndex = indexs.top();
            int diff = i - topIndex - 1;
            max_diff = max(max_diff, diff);
        } else {
            max_diff = i;
        }

        values.push(arr[i]);
        indexs.push(i);
    }

    cout << max_diff << endl;
}

int main() {
    fast
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
