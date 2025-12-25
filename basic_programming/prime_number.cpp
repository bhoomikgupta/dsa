#include <iostream>
using namespace std;
bool check_prime_number(int num);
void print_prime_factors(int limit);
int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    bool isPrime = check_prime_number(number);
    if (isPrime) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }
    print_prime_factors(number);
    return 0;
}

// bool check_prime_number(int num) {
//     if (num <= 1) return false;
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) return false;
//     }
//     return true;
// }

// Alternative approach
bool check_prime_number(int number) {
    if (number <= 1) return false;
    if (number == 2) return true; // 2 is the only even prime number
    if (number % 2 == 0 || number % 3 == 0) return false; // Exclude other even numbers

    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) return false;
    }
    return true;
}

void print_prime_factors(int limit) {
    for (int i = 2; i < limit; i++) {
        if (check_prime_number(i)) {
            int x = i;
            while(limit % x == 0) {
                std::cout << i << " ";
                x *= i;
            }
        }
    }
    std::cout << std::endl;
}