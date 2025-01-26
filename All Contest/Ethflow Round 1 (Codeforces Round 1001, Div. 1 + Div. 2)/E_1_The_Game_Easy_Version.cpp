#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAXN = 200005;
vector<int> tree[MAXN];
int l[MAXN], r[MAXN];

pair<ll, ll> dfs(int node, int parent, int X) {
    ll required_increments = 0, total_operations = 0;

    for (int child : tree[node]) {
        if (child == parent) continue;
        auto [child_required, child_operations] = dfs(child, node, X);
        required_increments += child_required;
        total_operations += child_operations;
    }

    if (X > r[node]) {
        return {1e18, 1e18};
    }
    ll additional_increments = max(0LL, static_cast<ll>(X - l[node]));

    if (total_operations + additional_increments > r[node]) {
        return {1e18, 1e18};
    }

    return {required_increments + additional_increments, total_operations + additional_increments};
}

bool is_valid(int n, int X) {
    auto [required, total] = dfs(1, -1, X);
    return required < 1e18;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++) {
            tree[i].clear();
        }

        for (int i = 1; i <= n; i++) {
            cin >> l[i] >> r[i];
        }

        for (int i = 1; i < n; i++) {
            int u, v;
            cin >> u >> v;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }

        int low = *max_element(l + 1, l + n + 1);
        int high = *max_element(r + 1, r + n + 1) + n;
        int result = high;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (is_valid(n, mid)) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << result << '\n';
    }

    return 0;
}
