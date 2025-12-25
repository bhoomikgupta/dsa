#include <iostream>
bool is_kth_bit_set(int n, int k);
using namespace std;
int main() {
    int n, k;
    cout << "Enter a number and the bit position to check (0-indexed): ";
    cin >> n >> k;
    if (is_kth_bit_set(n, k)) {
        cout << "The " << k << "th bit is set." << endl;
    } else {
        cout << "The " << k << "th bit is not set." << endl;
    }
    return 0;
}

// bool is_kth_bit_set(int n, int k) {
//     int x = 1;

//     for(int i=0; i<k; i++) {
//         x = x * 2;
        
//     }
//     return (n & x) != 0;
// }

//alternative approach using left shift operator
bool is_kth_bit_set(int n, int k) {
   return (n & (1 << k)) != 0;
}