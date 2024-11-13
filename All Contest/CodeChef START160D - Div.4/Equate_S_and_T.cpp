// // Created by @brownspy1 on 2024-11-13 Time:21-49-31
// #include <bits/stdc++.h>
// using namespace std;
// #define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
// #define yes cout<<"Yes"<<endl;
// #define no cout<<"No"<<endl;
// #define ll long long
// #define all(x) x.begin(), x.end()
// int main(){
//     fast
//     int t;cin>>t;
//     while (t--)
//     {
//         int n,m;cin>>n>>m;
//         string x,y;
//         cin>>x>>y;
//         int ax = 0,bx = 0, ay = 0, by = 0;
//         for (char i : x)
//         {
//             if (i == 'b')
//             {
//                 bx++;
//             }else
//             {
//                 ax++;
//             }

//         }
//         for (char i : y)
//         {
//             if (i == 'b')
//             {
//                 by++;
//             }else
//             {
//                 ay++;
//             }

//         }
//         bool flag = true;
//         if (bx != by)
//         {
//             flag = false;
//         }
//         // if (ax <= ay)
//         // {
//         //     flag = true;
//         // }
//         if (x[0] != y[0])
//         {
//             flag = false;
//         }
        
//         if (flag)
//         {
//             yes
//         }else
//         {
//             no
//         }
        

//     }
    
//     return 0;
// }
// Created by @brownspy1 on 2024-11-13 Time:21-58-59
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main(){
    fast
    int t;cin>>t;
    while (t--) {
        int n,m;cin>>n>>m;
        string x,y;
        cin>>x>>y;
        
        int ax = 0, bx = 0, ay = 0, by = 0;
        
      
        for (char i : x) {
            if (i == 'b') {
                bx++;
            } else {
                ax++;
            }
        }
        
   
        for (char i : y) {
            if (i == 'b') {
                by++;
            } else {
                ay++;
            }
        }

    
        if (bx != by) {
            no
        } else if (ax <= ay) {
            yes
        } else {
            no
        }
    }
    return 0;
}
