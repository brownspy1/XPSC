#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int inv2 = 500000004; // Modular inverse of 2 under MOD

long long mod_pow(long long base, int exp, int mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N;
        long long K;
        cin >> N >> K;
        vector<int> A(N);
        for (int& a : A) {
            cin >> a;
        }
        
        // Check if the array is a palindrome
        bool is_palindrome = true;
        for (int i = 0; i < N / 2; ++i) {
            if (A[i] != A[N - 1 - i]) {
                is_palindrome = false;
                break;
            }
        }
        
        // Compute the number of zeros in A
        int zeros = 0;
        for (int a : A) {
            if (a == 0) {
                zeros++;
            }
        }
        K %= MOD;
        long long M = mod_pow(K, zeros, MOD);
        
        if (!is_palindrome) {
            cout << M << '\n';
            continue;
        }
        
        // Compute P
        long long P = 1;
        for (int i = 0; i < N / 2; ++i) {
            int j = N - 1 - i;
            if (A[i] == 0 && A[j] == 0) {
                P = (P * K) % MOD;
            }
        }
        if (N % 2 == 1) {
            int mid = N / 2;
            if (A[mid] == 0) {
                P = (P * K) % MOD;
            }
        }
        
        long long ans = (M + P) % MOD;
        ans = ans * inv2 % MOD;
        cout << ans << '\n';
    }
    
    return 0;
}