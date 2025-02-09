#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)
#define ALL(x) (x).begin(), (x).end()
#define PB push_back
#define MP make_pair

const int MAXV = 200000;
int spf[MAXV+1];

void sieve(){
    FOR(i, 2, MAXV){
        spf[i] = i;
    }
    for (int i = 2; i * i <= MAXV; i++){
        if (spf[i] == i){
            for (int j = i * i; j <= MAXV; j += i){
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

vector<pair<int,int>> factorize(int x){
    vector<pair<int,int>> res;
    while(x > 1){
        int p = spf[x];
        int cnt = 0;
        while(x % p == 0){
            cnt++;
            x /= p;
        }
        res.PB(MP(p, cnt));
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve(); 

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        REP(i, n){
            cin >> arr[i];
        }

        vector<long long> cntB(n+1, 0), cntA(n+1, 0), cntC(n+1, 0);

        for (int x : arr){
            vector<pair<int,int>> fac = factorize(x);
            if(fac.size() == 1){
                int p = fac[0].first;
                int exp = fac[0].second;
                if(exp == 1){
                    cntB[x]++;
                } else if(exp == 2){
                    cntA[p]++;
                }
            }
            else if(fac.size() == 2){
                if(fac[0].second == 1 && fac[1].second == 1){
                    cntC[x]++;
                }
            }
        }

        long long ans = 0;

        FOR(p, 2, n){
            if(cntA[p] || cntB[p]){
                ans += cntA[p] * (cntA[p] + 1LL) / 2 + cntA[p] * cntB[p];
            }
        }

        long long totalB = 0, sumSqB = 0;
        FOR(p, 2, n){
            totalB += cntB[p];
            sumSqB += cntB[p] * cntB[p];
        }
        ans += (totalB * totalB - sumSqB) / 2;

        FOR(x, 2, n){
            if(cntC[x] > 0){
                vector<pair<int,int>> fac = factorize(x);
                int p = fac[0].first, q = fac[1].first;
                ans += cntC[x] * (cntC[x] + 1LL) / 2;
                ans += cntC[x] * (cntB[p] + cntB[q]);
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
