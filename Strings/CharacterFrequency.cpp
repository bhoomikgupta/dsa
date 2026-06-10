#include <iostream>
#include <string>
using namespace std;
void characterFrequency(string str);
int main()
{
    string str = "bhoomik";
    characterFrequency(str);
}

void characterFrequency(string str)
{
    int count[26] = {0};

    for(int i =0; i <str.length();i++){
        count[str[i] - 'a']++;
    }

    for(int i = 0; i <26;i++){
        if(count[i] > 0)
            cout<<"Count of "<<char(i+'a')<<": "<<count[i]<<endl;
    }
}