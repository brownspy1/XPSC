// Created by @brownspy1 on 2024-11-28 Time:20:41:32
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
    int n,t,s;
    cin>>n>>t>>s;
    int t1,t2;
    cin>>t1>>t2;
    int k;cin>>k;
    if (t1>t2)
    {
        swap(t1,t2);
    }
    
    if (k < t1)
    {
       cout<<t1-1<<endl;
       return;
    }
    if(k > t2)
    {
        cout<<n-t2<<endl;
        return;
    }
    int mx = (t2+t1)/2;
    int ans = min(abs(mx-t1),abs(mx-t2));
    cout<<ans<<endl;

    
    
}
