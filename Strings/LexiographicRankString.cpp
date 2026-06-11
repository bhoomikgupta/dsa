#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int lexiographicRankString(string str1);
unsigned long long iterativeFactorial(int n);
int main()
{
    string str1 = "string";
    cout<<"Rank of LexiographicRankString :"<<lexiographicRankString(str1);
}

int lexiographicRankString(string str1)
{
    int res = 1;
    int count[256] = {0};
    int n = str1.length();
    int mul = iterativeFactorial(n);
    for(int i = 0;i<n; i++)
        count[str1[i]]++;

    for (int i=1;i<256;i++)
        count[i] += count[i-1];

    for(int i = 0; i < n-1; i++){
        mul = mul/(n-i);
        res = res + count[str1[i] - 1]*mul;
        for(int j = str1[i]; j < 256; j++)
            count[j]--;
    }
    return res;
}

unsigned long long iterativeFactorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
