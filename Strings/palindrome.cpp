#include <iostream>
#include <string>
using namespace std;
bool isPal(string str);
int main()
{
    string str = "abcdcbd";
    if (isPal(str))
        cout<<"str is palindrome";
    else
        cout<<"str isn't palindrome";

    return 0;
}

bool isPal(string str){
    int begin = 0;
    int end = str.length() - 1;
    while(begin < end){
        if(str[begin] != str[end])
            return false;
        begin++;
        end--;
    }
    return true;
}