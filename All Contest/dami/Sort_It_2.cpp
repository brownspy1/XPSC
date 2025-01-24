#include <iostream>
using namespace std;
#include <algorithm>


int* sort_it(int n) {
    
    int* arr = new int[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + n, greater<int>()); 
    
    return arr; 
}

int main() {
    int n;
    cin >> n; 
    int* sortedArray = sort_it(n);
    for (int i = 0; i < n; i++) {
        cout << sortedArray[i] << " ";
    }
    cout << endl;
    delete[] sortedArray;
    return 0;
}
