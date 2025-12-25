#include <iostream>
using namespace std;
int euclideanGCD(int a, int b);
int lcm (int a, int b);
int euclideanLCM(int a, int b);
int main() {
     int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    int result = euclideanLCM(num1, num2);
    cout << "LCM of " << num1 << " and " << num2 << " is " << result << endl;
    return 0;
}

int euclideanGCD(int a, int b) {
   if (b == 0)
       return a;
   return euclideanGCD(b, a % b);
}

int lcm (int a, int b) {
    int maxVal = max(a, b);
    int lcm = maxVal;
    while (true) {
        if (lcm % a == 0 && lcm % b == 0) {
            break;
        }
        lcm += maxVal;
    }
    return lcm;
}

int euclideanLCM(int a, int b) {
    int gcdValue = euclideanGCD(a, b);
    return (a * b / gcdValue); // To prevent overflow
}