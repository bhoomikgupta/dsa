#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int leftmostRepeatingCharacter(string &str1);
int leftmost(string &str1);
int main()
{
    string str1 = "abbcd";
    cout<<"Leftmost Repeating Character " <<char(leftmost(str1));
    return 0;
}

int leftmostRepeatingCharacter(string &str1)
{
    int count[256] = {0};
    for(int i = 0; i<str1.length();i++){
        count[str1[i]]++;
    }

    for(int i = 0; i <256;i++){
        if(count[i] > 1)
            return i;
    }
    return -1;
}

int leftmost(string &str1) {
    int res = -1;
    bool visit[256] = {false};

    for (int i = str1.length() - 1; i >= 0; i--) {
        cout <<visit[str1[i]];
        if (visit[str1[i]]) {
            res = i;
        } else {
            visit[str1[i]] = true;
        }
    }
    return res;
}