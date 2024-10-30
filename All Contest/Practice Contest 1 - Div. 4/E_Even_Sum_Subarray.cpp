// Created by @brownspy1 on 2024-10-29 Time:22:51:18
#include <bits/stdc++.h>
using namespace std;

#define pub(X) push_back(X)
#define pob pop_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"

const int MOD = 1e9+7;
const int INF = INT_MAX;
const int NINF = INT_MIN;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}


void solve() {
    int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        int total_sum = 0;
        int max_length = 0;

        for (int i = 0; i < N; ++i)
        {
            total_sum += A[i];
            if (total_sum % 2 == 0)
            {
                max_length = i + 1;
            }
        }

        if (total_sum % 2 != 0)
        {
            int first_odd_index = -1;
            int last_odd_index = -1;
            for (int i = 0; i < N; ++i)
            {
                if (A[i] % 2 != 0)
                {
                    if (first_odd_index == -1)
                    {
                        first_odd_index = i;
                    }
                    else
                    {
                        last_odd_index = i;
                    }
                }
            }
            if (first_odd_index != -1)
            {
                max_length = max(max_length, N - first_odd_index -1); 
                max_length = max(max_length, last_odd_index);         
            }
        }

        cout << max_length << endl;
}
