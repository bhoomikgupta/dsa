#include <iostream>
#include <string>
using namespace std;
bool isAnagram(string str1, string str2);
int main()
{
    string str1 = "aabcdf";
    string str2 = "aabcde";
    if (isAnagram(str1, str2)){
        cout<<"both strings are anagram to each other";
    }
}

bool isAnagram(string str1, string str2)
{
    int count[256] = {0};
    if (str1.length() != str2.length())
        return false;
    else{
        for(int i=0; i<str1.length();i++){
            count[str1[i]]++;
            count[str2[i]]--;
        }
        for(int i=0; i< 256; i++){
            if(count[i]!=0)
                return false;
        }
    }
    return true;
}