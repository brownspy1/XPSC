// Created by @brownspy1 on 2025-01-22 Time:19-53-14
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
 
    while(t--){
        int n;
        cin >> n;
 
 
        vector<vector<int>> adj(n + 1);
        vector<int> deg(n + 1, 0);

        for (int i = 0; i < n - 1; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            deg[u]++;
            deg[v]++;
        }

        vector<int> nodes(n);
        iota(nodes.begin(), nodes.end(), 1);

       
        sort(nodes.begin(), nodes.end(), [&](int a, int b) {
            return deg[a] != deg[b] ? deg[a] > deg[b] : a < b;
        });

        
        for(int v = 1; v <= n; ++v){
            sort(adj[v].begin(), adj[v].end());
        }

        long long max_val = 0;
        for(int i = 0; i < n; ++i){
            int u = nodes[i];
            for(int j = i + 1; j < n; ++j){
            int v = nodes[j];
            if(!binary_search(adj[u].begin(), adj[u].end(), v)){
                max_val = max(max_val, static_cast<long long>(deg[u] + deg[v] - 1));
                break; 
            }
            }
        }

        long long maxA = 0;

        for(int u = 1; u <= n; ++u){
            for(int v : adj[u]){
            if(u < v){ 
                maxA = max(maxA, static_cast<long long>(deg[u] + deg[v] - 2));
            }
            }
        }
 
        cout << max(max_val, maxA) << "\n";
    }
    return 0;
}