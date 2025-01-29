// Created by @brownspy1 on 2025-01-29 Time:20-51-41
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()

int get_min_operations(string &a, int n) {
    string patterns[6] = {"RGB", "RBG", "GRB", "GBR", "BRG", "BGR"};
    int ans = n;

    for (int i = 0; i < 6; i++) {
        string current_pattern = "";
        int l = 0;

        while (l < n) {
            current_pattern += patterns[i][l % 3];
            l++;
        }

        int mismatches = 0;
        l = 0;
        while (l < n) {
            if (a[l] != current_pattern[l]) {
                mismatches++;
            }
            l++;
        }

        ans = min(ans, mismatches);
    }

    return ans;
}

int main() {
    fast
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int ans = get_min_operations(a, n);
        cout << ans << endl;
    }
    return 0;
}
