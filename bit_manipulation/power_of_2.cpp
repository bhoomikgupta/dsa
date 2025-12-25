#include <iostream>
int is_power_of_2(int n);
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (is_power_of_2(n)) {
        cout << n << " is a power of 2." << endl;
    } else {
        cout << n << " is not a power of 2." << endl;
    }
    return 0;
}

// int is_power_of_2(int n) {
//     if(n <= 0) return false;

//     while(n > 1) {
//         if(n % 2 != 0) {
//             return false;
//         }
//         n = n / 2;
//     }
//     return true;
// }

// Alternative approach using bitwise AND operator
int is_power_of_2(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}