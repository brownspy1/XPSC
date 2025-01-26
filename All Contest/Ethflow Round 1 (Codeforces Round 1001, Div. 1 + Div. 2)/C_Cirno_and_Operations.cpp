// Created by @brownspy1 on 2025-01-26 Time:21-32-35
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
#define int long long
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        if(n == 1) {
            cout << a[0] << '\n';
            continue;
        }

        int max_sum = accumulate(a.begin(), a.end(), 0LL);

        for(int k = 1; k < n; k++) {
            vector<int> curr = a;
            for(int step = 0; step < k; step++) {
                if(curr.size() == 1) break;
                if(curr.front() > curr.back()) reverse(curr.begin(), curr.end());

                vector<int> diff;
                for(int i = 0; i + 1 < curr.size(); i++) {
                    diff.push_back(curr[i+1] - curr[i]);
                }
                curr = diff;
            }

            int sum = accumulate(curr.begin(), curr.end(), 0LL);
            max_sum = max(max_sum, sum);
        }

        cout << max_sum << '\n';
    }
    return 0;
}
