// Created by @brownspy1 on 2024-11-24 Time:17-38-13
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main(){
    fast
    int t;cin>>t;
    while (t--)
    {
        int n ;cin>>n;
        stack<char> encode;
        for (int i = 0; i < n; i++)
        {
            char num;cin>>num;
            encode.push(num);
        }
        
        string ans;

        while (!encode.empty())
        {
            if (encode.top() == '0')
            {
                encode.pop();
                if (!encode.empty() && encode.size() >= 2)
                {
                    string num;
                    char first = encode.top();
                    encode.pop();
                    char Secend = encode.top();
                    encode.pop();
                    num.push_back(Secend);
                    num.push_back(first);
                    int x = stoi(num);
                    if (x >= 10 && x <= 26)
                    {
                        char a = 96+x;
                        ans.push_back(a);
                    }

                }

            }else
            {
                char a = encode.top();encode.pop();
                int x = a - '0';
                char m = 96+x;
                ans.push_back(m);
            }
        }
        
        reverse(all(ans));
        cout<<ans<<endl;
        
        
    }
    
    return 0;
}
