#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> l, r;
bool isPossible;

long long dfs(int node, int parent) {
    long long sum = 0, maxChild = 0;

    for (int neighbor : adj[node]) {
        if (neighbor == parent) continue;

        long long childSum = dfs(neighbor, node);
        if (!isPossible) return 0; // If impossible, stop processing

        maxChild += childSum;
    }

    if (maxChild < l[node]) {
        sum = r[node];
    } else {
        sum = min(maxChild, (long long)r[node]);
    }

    if (sum < l[node]) {
        isPossible = false;
    }

    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Number of nodes

        l.resize(n + 1);
        r.resize(n + 1);
        adj.assign(n + 1, vector<int>());

        // Read intervals for nodes
        for (int i = 1; i <= n; ++i) {
            cin >> l[i] >> r[i];
        }

        // Read edges
        for (int i = 0; i < n - 1; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        isPossible = true;
        long long maxS = dfs(1, -1);

        cout << (isPossible ? maxS : -1) << '\n';
    }

    return 0;
}
