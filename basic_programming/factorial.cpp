#include <iostream>
using namespace std;
unsigned long long iterativeFactorial(int n);
unsigned long long recursiveFactorial(int n);
int main()
{
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    //unsigned long long factorial = iterativeFactorial(number);
    unsigned long long factorial = recursiveFactorial(number);
    cout << "Factorial of " << number << " is " << factorial << endl;
    return 0;
}

unsigned long long iterativeFactorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

unsigned long long recursiveFactorial(int n) {
    if (n <= 1) return 1;
    return n * recursiveFactorial(n - 1);
}
