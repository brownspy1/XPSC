// Created by @brownspy1 on 2025-01-04 Time:19:20
#include <bits/stdc++.h>
using namespace std;

#define pub(X) push_back(X)
#define pob pop_back()
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

int solve(vector<int>& a, int k) {
    unordered_map<int, int> freq;

  
    for (int num : a) {
        freq[num]++;
    }


    vector<pair<int, int>> freq_vec(all(freq));
    sort(all(freq_vec), [](pair<int, int>& x, pair<int, int>& y) {
        return x.second < y.second; 
    });

    int distinct = sz(freq);  
    for (auto& p : freq_vec) {
        if (k >= p.second) {
            k -= p.second;  
            distinct--;  
        } else {
            break; 
        }
    }

    return distinct;
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n, k;
        cin >> n >> k; 
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }
        int ans = solve(a, k);
        if (ans == 0){
            cout<<1<<endl;
        }else
        {
            cout<<ans<<endl;
        }
        
        
    }

    return 0;
}
