#include <iostream>
using namespace std;
int digitsSum(int N)
{
    if (N == 0)
        return 0;
    return digitsSum(N/10) + N%10;
}
int main()
{
    cout<<"sum of digits: "<<digitsSum(567);
}
