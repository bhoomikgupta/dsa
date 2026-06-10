#include <iostream>
#include <string>
using namespace std;
void naiveSearch(string str1, string str2);
void naiveImproveSearch(string str1, string str2);
int main()
{
    string str1 = "AABCDE";
    string str2 = "BCD";
    naiveImproveSearch(str1, str2);
}

void naiveSearch(string str1, string str2)
{
    int m = str1.length();
    int n = str2.length();
    for(int i = 0; i<= m-n ;i++){
        int j = 0;
        for(j=0;j<n;j++){
            if(str2[j] != str1[i+j])
            {
                // cout<<str2[j] << str1[i+j];
                break;
            }
        }
        if(j == n)
            cout<<i<<" ";
    }
    return;
}

void naiveImproveSearch(string str1, string str2)
{
    int m = str1.length();
    int n = str2.length();
    for(int i = 0; i< m-n ;){
        int j = 0;
        for(j=0;j<n;j++){
            if(str2[j] != str1[i+j])
            {
                // cout<<str2[j] << str1[i+j];
                break;
            }
        }
        if(j == n)
            cout<<i<<" ";
        if (j == 0)
            i++;
        else
            i = i + j;
    }
    return;
}