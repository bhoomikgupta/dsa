#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
void printpermutation(string &str, int i=0)
{
    if(str.length()-1 == i)
    {
        cout<<str<<" ";
        return;
    }
    for(int j=i; j<str.length();j++){
        swap(str[j], str[i]);
        printpermutation(str,i+1);
        swap(str[j], str[i]);
    }
}


int main()
{
    string str = "ABCD";
    int i  = 0;
    printpermutation(str, i);
}
