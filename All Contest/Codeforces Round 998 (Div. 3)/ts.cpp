#include <iostream>
using namespace std;

void solve() {
    int t; 
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;

        int x = 0, ok = 1;
        while (n--) {
            int a; 
            cin >> a;

            if (a < x) {
                ok = 0;
            }
            x = a - x;
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
