#include <iostream>
using namespace std;
int countTrailingZeroes(int n);
int main() {
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;
    if (number < 0) {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        return 1;
    }
    int zeroCount = countTrailingZeroes(number);
    cout << "Number of trailing zeroes in " << number << "! is " << zeroCount << endl;
    return 0;
}
int countTrailingZeroes(int n) {
    int count = 0;
    for (int i = 5; i <= n; i *= 5) {
        count += n / i;
    }
    return count;
}