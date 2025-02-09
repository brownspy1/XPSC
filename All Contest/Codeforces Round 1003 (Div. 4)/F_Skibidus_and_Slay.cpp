#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n+1);
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
 
        vector<vector<int>> adj(n+1);
        for (int i = 1; i < n; i++){
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
 
        vector<char> ans(n+1, '0');
 
         for (int u = 1; u <= n; u++){
            for (int v : adj[u]){
                if(u < v && a[u] == a[v]){
                    ans[a[u]] = '1';
                }
            }
        }
 
        for (int v = 1; v <= n; v++){
            unordered_map<int,int> freq;
            for (int u : adj[v]){
                freq[a[u]]++;
            }
             for (auto &p : freq){
                if(p.second >= 2)
                    ans[p.first] = '1';
            }
        }
 
        string output;
        output.resize(n);
        for (int x = 1; x <= n; x++){
            output[x-1] = ans[x];
        }
        cout << output << "\n";
    }
    return 0;
}
