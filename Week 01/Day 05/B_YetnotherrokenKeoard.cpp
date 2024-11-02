// Created by @brownspy1 on 2024-11-02 Time:16:52:02
#include <bits/stdc++.h>
using namespace std;

#define pub(X) push_back(X)
#define pob pop_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"

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
    string word;
    cin>>word;
    deque<int> big;
    deque<int> small;
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] != 'B' && isupper(word[i]) ) big.push_back(i);
        if (word[i] != 'b' && islower(word[i]) ) small.push_back(i);

        if (!big.empty() && word[i] == 'B')
        {
           word[big.back()] = '0';
            
            big.pop_back();
        }else if (!small.empty() && word[i] == 'b')
        {
            word[small.back()] = '0';
            small.pop_back();
        }
    }
    for (auto &&i : word)
    {
        if (i!='b' && i!='B' && i!='0')
        {
            cout<<i;
        }
        
    }cout<<endl;
    
    
}
