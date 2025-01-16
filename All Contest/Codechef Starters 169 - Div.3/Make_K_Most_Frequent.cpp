// Created by @brownspy1 on 2025-01-15 Time:21-59-28
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main(){
    fast
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);

        for (long long i = 0; i < n; i++) cin >> v[i];

        map<long long, long long> m;
        long long ans = 0;

        for (long long i = 0; i < n; i++) {
            m[v[i]]++;
            ans = max(ans, m[v[i]]);
        }

        if (ans == m[k]) {
            cout << 0 << endl;
        } else {
    m.clear();
    long long ct = 0, pt = 0;

    // prefix check
    for (long long i = 0; i < n; i++) {
        m[v[i]]++;
        ct = max(ct, m[v[i]]);
        if (ct == m[k]) {
            pt = 1;
            break;
        }
    }

    // suffix check
    if (!pt) {
        m.clear();
        ct = 0;
        for (long long i = n - 1; i >= 0; i--) {
            m[v[i]]++;
            ct = max(ct, m[v[i]]);
            if (ct == m[k]) {
                pt = 1;
                break;
            }
        }
    }

    // prefix and suffix check
    if (!pt) {
        pt = 2; 
    }

    cout << pt << endl;
}

    }
    return 0;
}

