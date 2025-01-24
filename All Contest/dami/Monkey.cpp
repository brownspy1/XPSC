// // Created by @brownspy1 on 2025-01-24 Time:00-43-59
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char array[100005];
//     while (cin.getline(array, 100005))
//     {

//         int n = strlen(array);
//         sort(array, array + n);

//         for (int i = 0; i < n; i++)
//         {
//             if (array[i] != ' ')
//             {
//                 cout << array[i];
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[100005];
    while (cin.getline(a, 100005))
    {
        int n = strlen(a);
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] != ' ')
            {
                cout << a[i];
            }
        }
        cout << endl;
    }
    return 0;
}