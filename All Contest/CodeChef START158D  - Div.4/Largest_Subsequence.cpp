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

        for (auto &&i : word)
        {
            if (i == 'a')
            {
                acount++;
            }
            else if (i == 'b')
            {
                bcount++;
            }
        }
        if (acount == 1 && bcount == 1)
        {
            cout << 1 << endl;
        }
        else if (acount == bcount)
        {
            cout << acount + bcount << endl;
        }
        else
        {
            cout << max(acount, bcount) << endl;
        }
    }

    return 0;
}
