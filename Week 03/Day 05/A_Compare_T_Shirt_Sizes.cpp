// Created by @brownspy1 on 2024-11-17 Time:13-16-21
#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main()
{
    fast int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        char typeA = a.back();
        char typeB = b.back();
        int ax = a.size() - 1;
        int bx = b.size() - 1;
        if (typeA == typeB)
        {
            if (typeA == 'L')
            {
                if (ax > bx)
                {
                    cout << ">" << endl;
                }
                else if (bx > ax)
                {
                    cout << "<" << endl;
                }else
                {
                    cout<<"="<<endl;
                }
                
            }else if (typeA == 'S')
            {
                if (ax > bx)
                {
                    cout << "<" << endl;
                }
                else if (bx > ax)
                {
                    cout << ">" << endl;
                }else
                {
                    cout<<"="<<endl;
                }
            }else
            {
                cout<<"="<<endl;
            }
            
            
        }else
        {
            if ((typeA == 'S') || (typeA == 'M' && typeB == 'L'))
            {
                cout<<"<"<<endl;
            }else
            {
                cout<<">"<<endl;
            }

        }
        
    }

    return 0;
}
