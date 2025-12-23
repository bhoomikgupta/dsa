#include <iostream>
using namespace std;
int countDigits(int number);
int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    int digitCount = countDigits(number);
    std::cout << "Number of digits: " << digitCount << std::endl;
    return 0;
}
int countDigits(int number) {
    if (number == 0) return 1; // Special case for 0
    int count = 0;
    if (number < 0) number = -number; // Make number positive
    while (number > 0) {
        number /= 10;
        count++;
    }
    return count;
}