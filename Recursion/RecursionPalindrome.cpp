#include <iostream>
#include <string>
using namespace std;
bool isPalindromeRecursion(string &str, int start, int end);
int main()
{
    string str = "abcba";
    if (isPalindromeRecursion(str, 0, str.length()-1)){
        cout << "str: "<<str<<" is palindrome";
    }
}

bool isPalindromeRecursion(string &str, int start, int end)
{
    if (start>=end)
        return true;
    return ((str[start] == str[end]) && (isPalindromeRecursion(str, start + 1, end - 1)));
}