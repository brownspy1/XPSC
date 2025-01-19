// Created by @brownspy1 on 2025-01-19 Time:21-31-49
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define vii vector<vector<int>>
#define vi vector<int>
#define all(x) x.begin(), x.end()
int main(){
    fast
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vii cards(n, vi(m));
        vi smallest(n), order(n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> cards[i][j];
            }
            sort(cards[i].begin(), cards[i].end());
            smallest[i] = cards[i][0]; 
            order[i] = i + 1;          
        }

        int l = 0;
        while (l < n)
        {
             for (int r = l + 1; r < n; r++) {
                if (smallest[l] > smallest[r]) {
                    swap(smallest[l], smallest[r]);
                    swap(order[l], order[r]);
                }
            }
            l++;
        }
        

        int pile = -1;
        bool valid = true;

        for (int r = 0; r < m && valid; r++) {
            for (int l = 0; l < n && valid; l++) {
                int cow = order[l] - 1;
                bool played = false;

                for (int j = 0; j < m; j++) {
                    if (cards[cow][j] > pile) {
                        pile = cards[cow][j];
                        cards[cow][j] = -1; 
                        played = true;
                        break;
                    }
                }

                if (!played) valid = false;
            }
        }

        if (valid) {
            for (int i = 0; i < n; i++) {
                cout << order[i] << " ";
            }
            cout <<endl;
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}