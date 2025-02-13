// Created by @brownspy1 on 2024-12-25 Time:20-56-19
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

void solve(){
  int n;cin>>n;
  vector<int> v(n);
  for(int i = 0; i < n; i++) cin>>v[i];
  map<int,int>penalty;
  for (int i = 0; i <n; i++)
  {
    int delay = i+1;
    penalty[v[i]] = max(penalty[v[i]],delay);
  }
  int ans = 0;
  for (auto  x : penalty)
  {
        ans+=x.second;
  }
  cout<<ans<<endl;
  

}