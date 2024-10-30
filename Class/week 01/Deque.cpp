// Created by @brownspy1 on 2024-10-30 Time:19-45-49
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    deque<int> dq(n);

    for (int i = 0; i < dq.size(); i++)
    {
        cin >> dq[i];
    }

    dq.push_back(3);  // O(1)
    dq.push_front(7); // O(1)

    sort(dq.begin(),dq.end()); //O(nlogn)
    for (int i = 0; i < dq.size(); i++)
    {
        cout<<dq[i]<<" ";
    }
    cout<<endl;
    dq.pop_front();//O(1)
    dq.pop_back();//O(1)
    reverse(dq.begin(),dq.end());
    for (int i = 0; i < dq.size(); i++)
    {
        cout<<dq[i]<<" ";
    }
    
    return 0;
}