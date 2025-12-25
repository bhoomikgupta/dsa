#include <iostream>
int computePower(int base, int exponent);
using namespace std;
int main() {
    int power, base;
    cout << "Enter base and exponent: ";
    cin >> base >> power;
    long long result = computePower(base, power);
    cout << base << " raised to the power " << power << " is " << result << endl;
    return 0;
}

// int computePower(int base, int exponent) {
//     if (exponent == 0) return 1;
//     int result = 1;
//     for (int i = 0; i < exponent; ++i) {
//         result *= base;
//     }
//     return result;
// }

// int computePower(int base, int exponent) {
//      if (exponent == 0) return 1;
//      int temp = computePower(base, exponent / 2);
//      if (exponent % 2 == 0) {
//          return temp*temp;
//      } else {
//          return base * temp*temp;
//      }
// }

int computePower(int base, int exponent) {
    int result = 1;
    while (exponent > 0) {
        if (exponent & 1) { // If exponent is odd
            result *= base;
        }
        base *= base;
        exponent >>= 1; // Divide exponent by 2
    }
    return result;
}