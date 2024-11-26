// Created by @brownspy1 on 2024-11-26 Time:11:54:01
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
    string s;cin>>s;
    int n = s.size(); 
    int mn = min(s[0],s[n-1]);
    int mx = max(s[0],s[n-1]);

    vector<pair<char,ll>> v;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= mn && s[i] <= mx)
        {
           v.push_back({s[i],i}) ;
        }
        
    }
    
    sort(v.begin(), v.end(), [&] (pair<char,int> a, pair<char,int> b ){
        return a.second < b.second;
    });

    if (v.size() > 2)
    {
        sort(v.begin()+1, v.end()-1 , [&](auto a , auto b){
            if (s[0] < s[n-1]) 
            {
                return a.first < b.first;
            }else
            {
                return a.first > b.first;
            }
        });
    }
    
    ll mv = 0,zump = v.size();
    for (int i = 0; i < zump-1; i++)
    {
        mv+= abs(v[i].first - v[i+1].first);
       
    }
    cout<<mv<<" "<<zump<<endl;
    for (auto &&i : v)
    {
        cout<<i.second+1<<" ";
    }
    cout<<endl;
    
    

}
