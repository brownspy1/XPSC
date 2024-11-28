// Created by @brownspy1 on 2024-11-28 Time:18:37:25
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
    int n;char m;cin>>n>>m;
    string light;cin>>light;
    string ans = light+light;
    // if (ans[0] == 'g')
    // {
    //     cout<<0<<endl;
    //     return;
    // }
    
    int b=0,mx = 0,r = 0;
    while (r < ans.size())
    {
        if (ans[r] == m)
        {
            b = 0;
            while (r < ans.size() && ans[r] != 'g')
            {
                b++;
                r++;
            }
            mx = max(mx,b);
            
        }
        r++;
        
    }
    cout<<mx<<endl;
    
}
