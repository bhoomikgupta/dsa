#include <iostream>
using namespace std;
bool isPalindrome(int number);
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }
    return 0;
}
bool isPalindrome(int number) {
    int original = number;
    int reversed = 0;
    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    return original == reversed;
}
