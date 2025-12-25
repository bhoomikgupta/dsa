#include <iostream>
int count_set_bits(int n);
int tbl[256];
void initialize_table();
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    initialize_table();
    cout << "Number of set bits: " << count_set_bits(n) << endl;
    return 0;
}

// int count_set_bits(int n) {
//     int count = 0;
//     while (n > 0) {
//         if (n%2 == 1) {
//             count++;
//         }
//         n = n / 2;
//     }
//     return count;
// }

//Alternative approach using bitwise AND operator
// int count_set_bits(int n) {
//     int count = 0;
//     while (n > 0) {
//         n = n & (n - 1); // Clear the least significant bit set
//         count++;
//     }
//     return count;
// }

void initialize_table() {
    tbl[0] = 0;
    for (int i = 1; i < 256; i++) {
        tbl[i] = tbl[i & (i - 1)] + 1;
    }
}

int count_set_bits(int n) {
    initialize_table();
    int count = 0;
    while (n > 0) {
        count += tbl[n & 0xff]; // Get the last 8 bits
        n >>= 8; // Right shift by 8 bits
    }
    return count;
}