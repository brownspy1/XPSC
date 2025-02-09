// Created by @brownspy1 on 2025-02-09 Time:21-26-25
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

void process(int UP, int DOWN, char CHAR_UP, char CHAR_DOWN, int k) {
    int ups = UP, downs = DOWN;
    int p = 0;
    string ans;
    for (int i = 0; i < k; i++) {
        ans.push_back(CHAR_UP);
        ups--;
        p++;
    }
    int target = UP - DOWN;
    while (ups > 0 || downs > 0) {
        if (p == k) {
            if (downs <= 0) break;
            ans.push_back(CHAR_DOWN);
            downs--;
            p--;
        } else if (p == 0) {
            if (ups <= 0) break;
            ans.push_back(CHAR_UP);
            ups--;
            p++;
        } else {
            if (p > target && downs > 0) {
                ans.push_back(CHAR_DOWN);
                downs--;
                p--;
            } else if (p < target && ups > 0) {
                ans.push_back(CHAR_UP);
                ups--;
                p++;
            } else {
                if (downs > 0) {
                    ans.push_back(CHAR_DOWN);
                    downs--;
                    p--;
                } else if (ups > 0) {
                    ans.push_back(CHAR_UP);
                    ups--;
                    p++;
                }
            }
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        if (n >= m) {
            if (k < n - m || k > n) {
                cout << -1 << "\n";
                continue;
            }
            process(n, m, '0', '1', k);
        } else {
            if (k < m - n || k > m) {
                cout << -1 << "\n";
                continue;
            }
            process(m, n, '1', '0', k);
        }
    }
    return 0;
}
