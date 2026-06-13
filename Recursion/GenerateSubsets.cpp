#include <iostream>
using namespace std;
void generateSubsets(const string &str, string curr=" ", int i=0)
{
    if (i == str.length()){
        cout<<curr<<endl;
        return;
    }
    generateSubsets(str, curr, i+1);
    generateSubsets(str, curr + str[i], i+1);
}
int main()
{
    string curr = " ";
    string str = "ABCD";
    generateSubsets(str, curr ,0);
}

