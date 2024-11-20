// Created by @brownspy1 on 2024-11-20 Time:21:02:03
#include <bits/stdc++.h>
using namespace std;

#define pub(X) push_back(X)
#define pob pop_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes" << endl;
#define cno cout << "No" << endl;

const int MOD = 1e9 + 7;
const int INF = INT_MAX;
const int NINF = INT_MIN;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve();

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}


void solve()
{
    int n;
        cin >> n;
        
        int alice[n], bob[n];
        for (int i = 0; i < n; i++) cin >> alice[i];
        for (int i = 0; i < n; i++) cin >> bob[i];

        int max_val = 0, max_index = -1;
        for (int i = 0; i < n; i++) {
            int current_max = (alice[i] > bob[i]) ? alice[i] : bob[i];
            if (current_max > max_val) {
                max_val = current_max;
                max_index = i;
            }
        }

        int largest = 0, largest_index = -1;
        int second_largest = 0, second_largest_index = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (alice[i] > largest) {
                second_largest = largest;
                second_largest_index = largest_index;
                largest = alice[i];
                largest_index = i;
            } else if (alice[i] > second_largest) {
                second_largest = alice[i];
                second_largest_index = i;
            }
        }

        largest = (alice[largest_index] > bob[largest_index]) ? alice[largest_index] : bob[largest_index];
        second_largest = (alice[second_largest_index] > bob[second_largest_index]) ? alice[second_largest_index] : bob[second_largest_index];

        if (largest == second_largest && max_val == largest) cno
        else cyes
}
