// Created by @brownspy1 on 2025-01-22 Time:21-46-01
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vii vector<vector<int>>

vi max_frogs_in_bucket(int t, const vii& test_cases) {
    vi results;
    for (const auto& positions : test_cases) {
        int count_even = 0, count_odd = 0;

        for (int pos : positions) {
            if (pos % 2 == 0) {
                count_even++;
            } else {
                count_odd++;
            }
        }

        results.push_back(max(count_even, count_odd));
    }

    return results;
}

int main() {
    fast
    int t;
    cin >> t;

    vector<vector<int>> test_cases(t);

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        test_cases[i].resize(n);
        for (int j = 0; j < n; ++j) {
            cin >> test_cases[i][j];
        }
    }

    vector<int> results = max_frogs_in_bucket(t, test_cases);

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
