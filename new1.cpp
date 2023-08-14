#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i = 0, j = 0, n, m;
    vector<int> arr1, arr2;
    
    // Input array sizes
    cin >> n >> m;
    
    // Input array elements
    for (int k = 0; k < n; k++) {
        int num;
        cin >> num;
        arr1.push_back(num);
    }
    for (int k = 0; k < m; k++) {
        int num;
        cin >> num;
        arr2.push_back(num);
    }
    
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            cout << arr1[i] << endl;
            i++;
        } else {
            cout << arr2[j] << endl;
            j++;
        }
    }
    
    // Print remaining elements of arr1 (if any)
    while (i < n) {
        cout << arr1[i] << endl;
        i++;
    }
    
    // Print remaining elements of arr2 (if any)
    while (j < m) {
        cout << arr2[j] << endl;
        j++;
    }
    
    return 0;
}
