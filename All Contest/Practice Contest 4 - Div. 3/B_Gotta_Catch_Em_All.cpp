// Created by @brownspy1 on 2024-11-25 Time:21:09:24
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
    int x,y,z;cin>>x>>y>>z;
    vector<int> pokemon(x);
    for (int i = 0; i < x; i++)
    {
        cin>>pokemon[i];
    }
    int ans = 0;
    for (int i = 0; i < x; i++)
    {
        ans += min(pokemon[i]*y,z);
    }
    cout<<ans<<endl;
    
    
}
