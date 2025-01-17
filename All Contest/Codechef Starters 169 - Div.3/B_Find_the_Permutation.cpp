// Created by @brownspy1 on 2025-01-17 Time:21-33-02
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
bool cmp(int a, int b, const vector<string>& adj) {
    return (a < b && adj[a][b] == '1') || 
           (a > b && adj[b][a] == '0');
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<string> adj(n);
        for (int i = 0; i < n; i++) {
            cin >> adj[i];
        }
        vector<int> perm(n);
        for (int i = 0; i < n; i++) {
            perm[i] = i;
        }
        sort(all(perm),[&](int a, int b) {
            return cmp(a, b, adj);
        });

        for (int i = 0; i < n; i++) {
            cout << (perm[i] + 1) << " \n"[i == n - 1];
        }
    }

    return 0;
}
