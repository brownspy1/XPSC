// Created by @brownspy1 on 2025-01-29 Time:21-18-45
#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define cyes cout << "Yes" << endl;
#define cno cout << "No" << endl;
#define ll long long
#define vi vector<int>
#define all(x) x.begin(), x.end()

using namespace std;

vi precompute_log_table(int max_n)
{
    vi log_table(max_n + 1, 0);
    for (int i = 2; i <= max_n; ++i)
    {
        log_table[i] = log_table[i / 2] + 1;
    }
    return log_table;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int max_n = 3 * 100000 + 1;
    vi log_table = precompute_log_table(max_n);

    int T;
    cin >> T;

    while (T--)
    {
        int N, P;
        cin >> N >> P;
        vi A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        vi left_volcano(N, -1);
        int last_v = -1;
        for (int i = 0; i < N; ++i)
        {
            if (A[i] == 0)
            {
                last_v = i;
                left_volcano[i] = i;
            }
            else
            {
                left_volcano[i] = last_v;
            }
        }

        vi right_volcano(N, N);
        last_v = N;
        for (int i = N - 1; i >= 0; --i)
        {
            if (A[i] == 0)
            {
                last_v = i;
                right_volcano[i] = i;
            }
            else
            {
                right_volcano[i] = last_v;
            }
        }

        int n = N;
        if (n == 0)
        {
            cout << endl;
            continue;
        }
        int k_max = log_table[n] + 1;
        vector<vi> st(k_max, vi(n));
        vi current_row = A;
        st[0] = current_row;
        int current_k = 1;
        while ((1 << current_k) <= n)
        {
            int prev_k = current_k - 1;
            int step = 1 << prev_k;
            for (int i = 0; i <= n - (1 << current_k); ++i)
            {
                st[current_k][i] = max(st[prev_k][i], st[prev_k][i + step]);
            }
            ++current_k;
        }

        auto get_max = [&](int l, int r)
        {
            if (l > r)
                return 0;
            int length = r - l + 1;
            int k = log_table[length];
            return max(st[k][l], st[k][r - (1 << k) + 1]);
        };

        vi result;
        for (int i = 0; i < N; ++i)
        {
            if (A[i] == 0)
            {
                result.push_back(0);
                continue;
            }

            vi possible_X;
            int lv = left_volcano[i];
            if (lv != -1)
            {
                int left_limit = lv + 1;
                int lr = i - 1;
                int left_max = (left_limit <= lr) ? get_max(left_limit, lr) : 0;
                int X_left = max(A[i], left_max);
                possible_X.push_back(X_left);
            }

            int rv = right_volcano[i];
            if (rv != N)
            {
                int rl = i + 1;
                int rr = rv - 1;
                int right_max = (rl <= rr) ? get_max(rl, rr) : 0;
                int X_right = max(A[i], right_max);
                possible_X.push_back(X_right);
            }

            int X = *min_element(possible_X.begin(), possible_X.end());
            int t = (X + P - 1) / P;
            result.push_back(t);
        }

        for (int i = 0; i < result.size(); ++i)
        {
            if (i > 0)
                cout << " ";
            cout << result[i];
        }
        cout << endl;
    }

    return 0;
}