// Created by @brownspy1 on 2024-12-22 Time:20-57-22
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
    long long n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<long long> days = {a, b, c};
    long long sum = a + b + c;
    long long fc = n / sum;
    long long day = fc * 3;
    long long covered_distance = fc * sum;

    int i = 0;
    while (i < 3 && covered_distance < n)
    {
        covered_distance += days[i];
        day++;
        i++;
    }
    
    cout << day << endl;
}