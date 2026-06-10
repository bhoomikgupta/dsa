#include <iostream>
#include <string>
#include <algorithm>
#include <cstdint>
using namespace std;
int leftmostNonRepeatingCharacter(string &str1);
int leftmostNonRepeatingCharacterStream(string &str1);
int main()
{
    string str1 = "abbcd";
    cout<<"Leftmost Repeating Character " <<char(leftmostNonRepeatingCharacterStream(str1));
    return 0;
}

int leftmostNonRepeatingCharacter(string &str1)
{
    int count[256] = {0};
    for(int i = 0; i<str1.length();i++){
        count[str1[i]]++;
    }

    for(int i = 0; i <256;i++){
        if(count[i] == 1)
            return i;
    }
    return -1;
}

int leftmostNonRepeatingCharacterStream(string &str1) {
    int res = INT32_MAX;
    int count[256];
    fill(count, count+256, -1);
    for (int i=0; i< str1.length();i++){
        if(count[str1[i]] == -1){
            count[str1[i]] = i;
        } else {
            count[str1[i]] = -2;
        }
    }

    for(int i=0;i<256;i++){
        if(count[i]>=0){
            res = min(res, count[i]);
        }
    }
    cout <<res;
    return (res==INT32_MAX)? -1 : res;
}