#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(m);
        for (int i = 0; i < m; ++i) cin >> a[i];

        unordered_set<int> known_questions;
        for (int i = 0; i < k; ++i) {
            int q;
            cin >> q;
            known_questions.insert(q);
        }

        string result;
        for (int i = 0; i < m; ++i) {
            int excluded = a[i];
            bool can_pass = true;

            for (int q = 1; q <= n; ++q) {
                if (q != excluded && known_questions.find(q) == known_questions.end()) {
                    can_pass = false;
                    break;
                }
            }

            result += (can_pass ? '1' : '0');
        }

        cout << result << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
