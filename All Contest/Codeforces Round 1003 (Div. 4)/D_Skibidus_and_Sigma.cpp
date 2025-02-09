// Created by @brownspy1 on 2025-02-09 Time:21-12-51
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


class Array {
public:
    long long tot;   
    long long score; 
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        
        vector<Array> arrays(n);
        
        for (int i = 0; i < n; i++){
            ll tot = 0, scr = 0;
            for (int j = 0; j < m; j++){
                int x;
                cin >> x;
                tot += x;      
                scr += tot;    
            }
            arrays[i] = {tot, scr};
        }
        
        sort(all(arrays), [](const Array &a, const Array &b) {
            return a.tot > b.tot;
        });
        
        ll ans = 0, cumulativeSum = 0;
        for (int i = 0; i < n; i++){
            ans += arrays[i].score + m * cumulativeSum;
            cumulativeSum += arrays[i].tot; 
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
