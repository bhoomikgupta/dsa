#include <iostream>
using namespace std;
int gcd(int a, int b);
int euclideanGCD(int a, int b);
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    int result = euclideanGCD(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is " << result << endl;
    return 0;
}

int gcd (int a, int b)  {
    int res = min(a, b);
    while (res > 0) {
        if (a % res == 0 && b % res == 0) {
            break;
        }
        res--;
    }
    return res;
}

// int euclideanGCD(int a, int b) {
//     while (a != b) {
//         if (a > b)
//             a = a - b;
//         else
//             b = b - a;
//     }
//     return a;
// }

// Alternatively, using modulo operator

int euclideanGCD(int a, int b) {
   if (b == 0)
       return a;
   return euclideanGCD(b, a % b);
}