// Created by @brownspy1 on 2024-10-30 Time:20-53-33
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string word;
        cin >> word;
        int acount = 0, bcount = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (word[i] == 'a' && word[i + 1] == 'b')
            {
                acount++;
            }
            if (word[i] == 'b' && word[i + 1] == 'a')
            {
                bcount++;
            }
        }

        if (acount == bcount)
        {
            cout << n << endl;
        }
        else
        {
            int cnt1 = n, cnt2 = n;
            char first = word[0], last = word[n - 1];
            for (int i = 0; i < n; i++)
            {
                if (word[i] != first)
                {
                    break;
                }
                cnt1--;
            }
            for (int i = n-1; i >=0; i--)
            {
                if (word[i] != last)
                {
                    break;
                }
                cnt2--;
            }
            cout << max(cnt1, cnt2) << '\n';
        }
    }

    return 0;
}
