#include <iostream>
#include <string>
using namespace std;
bool isSubSeq(string str, string subStr);
bool isSubSeqRec(string str, string subStr, int m, int n);
int main()
{
  string str = "Bhoomik";
  string subStr = "omk";
    if (isSubSeq(str, subStr))
        cout<<"subStr is subsequence";
    else
        cout<<"subStr isn't subsequence";

    if (isSubSeqRec(str, subStr, str.length(), subStr.length()))
        cout<<"subStr is subsequence";
    else
        cout<<"subStr isn't subsequence";
    return 0;
}

bool isSubSeq(string str, string subStr)
{
    int j = 0;
    for (int i = 0; i< str.length() && j < subStr.length(); i++)
    {
        if(str[i] == subStr[j])
            j++;
    }
    return (j == subStr.length());
}

bool isSubSeqRec(string str, string subStr, int m, int n)
{
    if(n == 0)
        return true;
    if(m == 0)
        return false;
    
    if(str[m-1] == subStr[n-1])
        return isSubSeqRec(str, subStr, m-1, n-1);
    else
        return isSubSeqRec(str, subStr, m-1,n);

}
