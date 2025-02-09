#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    string W;
    cin >> W;
    W.erase(W.size() - 2); 
    cout << W + "i" << "\n";
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
