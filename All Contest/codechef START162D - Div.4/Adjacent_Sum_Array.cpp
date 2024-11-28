// Created by @brownspy1 on 2024-11-27 Time:20:55:56
#include <bits/stdc++.h>
using namespace std;

#define pub(X) push_back(X)
#define pob pop_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define yes cout << "YES\n"
#define no cout << "nO\n"
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
    int n;cin>>n;
    vector<ll> v(n-1);
    for(int i =0; i < n-1; i++) cin>>v[i];

    sort(all(v));
    vector<ll> ans(n);
    ans[0] = v[0]/2;
    ans[1] = v[0]-ans[0];    
    int i = 2;
    while (i < n)
    {
        ans[i] = v[i-1] - ans [i-1];
        i++;
    }
    for (ll i : ans)
    {
        cout<<i<<" ";
    }
    
    
    cout <<endl;
}