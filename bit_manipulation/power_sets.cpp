#include <iostream>
using namespace std;
void generate_power_set(const string &str);
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Power set of " << str << " is:" << endl;
    generate_power_set(str);
    return 0;
}

void generate_power_set(const string &str) {
    int n = str.length();
    int power_set_size = 1 << n; // 2^n
    for (int i = 0; i < power_set_size; i++) {
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                cout << str[j];
            }
        }
        cout << endl;
    }
}