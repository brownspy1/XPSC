// Created by @brownspy1 on 2024-11-25 Time:21:44:25
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
    int s,ss;cin>>s>>ss;
    string a,b;cin>>a>>b;
    int l = 0 ,ans = INT16_MAX;
    while (l <= s - ss)
    {
        string x = a.substr(l,ss);
        int mov = 0;
        for (int i = 0; i < ss; i++)
        {
            int dif = abs(x[i] - b[i]); 
            mov += min(dif,10 - dif);
        }
        ans = min(ans , mov);
        l++;
        
    }
    
    cout<<ans<<endl;
}

