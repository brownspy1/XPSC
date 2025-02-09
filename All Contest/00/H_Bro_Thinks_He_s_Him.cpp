#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
#define MOD 998244353
#define rep(i, a, b) for (int i = (a); i <= (b); i++)
 
class Fenw {
public:
    int n;
    vector<ll> f;
    Fenw(int n): n(n), f(n+1, 0) {}
    
    void upd(int i, ll d) {
        for(; i <= n; i += i & -i) {
            f[i] = (f[i] + d) % MOD;
            if(f[i] < 0) f[i] += MOD;
        }
    }
    
    ll query(int i) {
        ll res = 0;
        for(; i > 0; i -= i & -i)
            res = (res + f[i]) % MOD;
        return res;
    }
    
    ll range(int l, int r) {
        if(l > r) return 0;
        ll ans = query(r) - query(l-1);
        return (ans % MOD + MOD) % MOD;
    }
};
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; 
    cin >> t;
    while(t--){
        string s; 
        cin >> s;
        int n = s.size();
 
        vector<ll> p(n+1, 0);
        p[0] = 1;
        rep(i, 1, n) 
            p[i] = (p[i-1] * 2) % MOD;
 
        Fenw fr0(n), fr1(n), fl0(n), fl1(n);
        rep(i, 1, n) {
            if(s[i-1]=='0'){
                fr0.upd(i, p[i-1]);
                fl0.upd(i, p[n-i]);
            } else {
                fr1.upd(i, p[i-1]);
                fl1.upd(i, p[n-i]);
            }
        }
 
        ll Tsum = 0;
        rep(pos, 2, n) {
            if(s[pos-1]=='0')
                Tsum = (Tsum + p[n-pos] * fr1.range(1, pos-1)) % MOD;
            else
                Tsum = (Tsum + p[n-pos] * fr0.range(1, pos-1)) % MOD;
        }
 
        int q; 
        cin >> q;
        while(q--){
            int pos; 
            cin >> pos;
            char old = s[pos-1], nw = (old == '0' ? '1' : '0');
 
            ll sr_old = (old=='0' ? fr0.range(1, pos-1) : fr1.range(1, pos-1));
            ll sr_new = (nw=='0' ? fr0.range(1, pos-1) : fr1.range(1, pos-1));
            ll deltaR = (p[n-pos] * ((sr_old - sr_new) % MOD)) % MOD;
            if(deltaR < 0) deltaR += MOD;
 
            ll sl_old = (old=='0' ? fl0.range(pos+1, n) : fl1.range(pos+1, n));
            ll sl_new = (nw=='0' ? fl0.range(pos+1, n) : fl1.range(pos+1, n));
            ll deltaL = (p[pos-1] * ((sl_old - sl_new) % MOD)) % MOD;
            if(deltaL < 0) deltaL += MOD;
 
            ll delta = (deltaR + deltaL) % MOD;
            Tsum = (Tsum + delta) % MOD;
 
            if(old=='0'){
                fr0.upd(pos, -p[pos-1]);
                fl0.upd(pos, -p[n-pos]);
            } else {
                fr1.upd(pos, -p[pos-1]);
                fl1.upd(pos, -p[n-pos]);
            }
            if(nw=='0'){
                fr0.upd(pos, p[pos-1]);
                fl0.upd(pos, p[n-pos]);
            } else {
                fr1.upd(pos, p[pos-1]);
                fl1.upd(pos, p[n-pos]);
            }
 
            s[pos-1] = nw;
            ll ans = (p[n] - 1 + Tsum) % MOD;
            if(ans < 0) ans += MOD;
            cout << ans << " ";
        }
        cout << "\n";
    }
    return 0;
}
