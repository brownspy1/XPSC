// Created by @brownspy1 on 2024-11-28 Time:20:31:16
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
    int n,t,s;cin>>n>>t>>s;
    vector<int> v(t);
    for (int i = 0; i < t; i++)
    {
        cin>>v[i];
    }
    sort(all(v));
    while (s--)
    {
        int k;cin>>k;
        if (k<v[0])
        {
            cout<<v[0]-1<<endl;
        }else if (k>v[t-1])
        {
            cout<<n-v[t-1]<<endl;
        }else
        {
            auto it = lower_bound(all(v),k);
            int l = *it;
            int r = *--it;
            cout<<abs((r-l)/2)<<endl;
        }
        
        
        
    }
    
    
}
