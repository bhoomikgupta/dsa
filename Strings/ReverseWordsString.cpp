#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void reverseWordString(string &str);
void reverseString(string &str, int low, int high);
int main()
{
    string str = "bhoomik is a good boy";
    cout<<"Reverse Word of string"<<endl;
    reverseWordString(str);
    cout<<str;
}

void reverseWordString(string &str)
{
    int start = 0;
    int end = 0;
    for(end = 0; end < str.length();end++){
        if(str[end] == ' '){
           reverseString(str, start, end-1);
           start = end + 1;
        }
    }
    reverseString(str, start, end-1);
    reverseString(str, 0, end-1);
}

void reverseString(string &str, int low, int high){
    while(low<high){
        int temp = str[low];
        str[low] = str[high];
        str[high] = temp;
        low++;
        high--;
    }
}