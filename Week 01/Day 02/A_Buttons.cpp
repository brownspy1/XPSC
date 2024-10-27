// Created by @brownspy1 on 2024-10-27 Time:20-33-34
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    if (a > b)
    {
        ans = (a + a) - 1;
    }
    else if (b > a)
    {
        ans = (b + b) - 1;
    }
    else if (a == b)
    {
        ans = (b + b);
    }
    cout << ans;

    return 0;
}