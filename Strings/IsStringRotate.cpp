#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isStringRotate(string &str1, string &str2);
int main()
{
    string str1 = "ABCD";
    string str2 = "DABC";
    if(isStringRotate(str1, str2))
        cout<<str2<<" is rotated string of "<<str1;
}

bool isStringRotate(string &str1, string &str2)
{
    if(str1.length() != str2.length())
        return false;
    return ((str1 + str2).find(str2) != string:: npos);
}