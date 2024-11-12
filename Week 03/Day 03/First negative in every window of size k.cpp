// problem link is https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> FirstNegativeInteger(vector<int> &a, int k)
    {
        int n = a.size(), l = 0, r = 0;
        vector<int> ans;
        queue<int> q;
        while (r < n)
        {

            if(a[r] < 0){
                q.push(a[r]);
            }
            
            if(r-l+1 == k){
                if(q.empty()){
                    ans.push_back(0);
                }else{
                    ans.push_back(q.front());
                    if(a[l] == q.front()){
                        q.pop();
                    }
                }
                l++;
                
            }
            r++;
        }
        return ans;
    }
};