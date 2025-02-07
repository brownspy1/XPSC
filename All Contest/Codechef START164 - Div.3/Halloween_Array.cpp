// Created by @brownspy1 on 2025-02-08 Time:00-00-41
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
  int n,l,r;cin>>n>>l>>r;
  vi v;
  set<int> st;
  for (int i = 0; i < n; i++)
  {
    int x;cin>>x;
    v.pub(x);
    st.insert(x);
  }
  if (sz(st) < n)
  {
    if (l == 0)
    {
        yes;
        return;
    }else
    {
        no;
        return;
    }
  }

  ll mul = 1;
  for (int i = 0; i < n; i++)
  {
    for(int j = i+1; j < n; j++)
    {
       
        mul *= (v[i] ^ v[j]);
        
    }
    
  }
  if (mul >= l && mul <= r)
  {
    yes;
  }else
  {
    no;
  }
  
  
  
  
  
}