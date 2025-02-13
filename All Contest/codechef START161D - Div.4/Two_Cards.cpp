// Created by @brownspy1 on 2024-11-20 Time:21:02:03
#include <bits/stdc++.h>
using namespace std;

#define pub(X) push_back(X)
#define pob pop_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes" << endl;
#define cno cout << "No" << endl;

const int MOD = 1e9 + 7;
const int INF = INT_MAX;
const int NINF = INT_MIN;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve();

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}


void solve()
{
    int n;
        cin >> n;
        
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

       map<int,int> mp;
       for (int i = 0; i < n; i++)
       {
            mp[a[i]] = max(a[i],b[i]);
       }
       sort(all(a),greater<int>());
       int bob = mp[a[0]];bool flag = false;
       for (int i = 0; i < n; i++)
       {
            if (mp[a[i]] > bob)
            {
                flag = true;
                break;
            }
            
       }
       if(!flag){
            if (bob > mp[a[1]])
            {
                yes;
            }else
            {
                no;
            }

       }else
       {
        yes;
       }
       
       
       
}
