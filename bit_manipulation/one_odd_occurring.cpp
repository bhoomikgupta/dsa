#include <iostream>
int find_odd_occurring(int arr[], int n);
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 2, 1, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The element occurring odd number of times is: " << find_odd_occurring(arr, n) << endl;
    return 0;
}

// int find_odd_occurring(int arr[], int n) {
//     int result = 0;
//     for (int i =0 ; i <n; i++) {
//         for(int j =0 ; j < n; j++) {
//             if(arr[i] == arr[j]) {
//                 result++;
//             }
//         }
//         if(result % 2 != 0) {
//             return arr[i];
//         }
//     }
//     return -1;
//}

// Alternative approach using XOR operator
int find_odd_occurring(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }
    return result;
}