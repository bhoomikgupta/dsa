#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool anagramSearch(string str1, string str2);
int main()
{
    string str1 = "geeksforgeeks";
    string str2 = "frog";
    if(anagramSearch(str1, str2))
        cout<<"found anagram :"<<str2<<" in "<<str1;
}

bool anagramSearch(string str1, string str2)
{
    int CT[256] = {0};
    int CP[256] = {0};

    for(int i = 0; i<str2.length();i++)
    {
        CT[str1[i]]++;
        CP[str2[i]]++;
    }

    for(int i = str2.length(); i<str1.length();i++){
        if(equal(begin(CT), end(CT), begin(CP)))
            return true;
        CT[str1[i]]++;
        CT[str1[i - str2.length()]]--;
    }
    return false;
}