// Created by @brownspy1 on 2024-10-27 Time:19-28-57
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    // ka koto pabe seta
    int Sereja = 0, Dima = 0;
    // left and right er index
    int left = 0, right = n - 1;
    // akon kar chal seta
    bool tarn = true;

    while (left <= right)
    {
        if (v[left] > v[right])
        {
            if (tarn)
            {
                Sereja += v[left];
            }
            else
            {
                Dima += v[left];
            }
            left++;
        }
        else
        {
            if (tarn)
            {
                Sereja += v[right];
            }
            else
            {
                Dima += v[right];
            }
            right--;
        }
        tarn = !tarn;
    }

    cout << Sereja << " " << Dima;
    return 0;
}
