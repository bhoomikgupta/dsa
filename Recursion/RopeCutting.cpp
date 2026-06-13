#include <iostream>
using namespace std;
int ropeCutting(int N, int a, int b, int c)
{
    if (N == 0)
        return 0;
    if(N < 0)
        return  -1;
    int res = max(ropeCutting(N-a, a,b,c),ropeCutting(N-b, a,b,c));
    res = max(res,ropeCutting(N-c, a,b,c));
    if (res == -1)
        return -1;
    return res + 1;
}
int main()
{
    cout<<"No. of rope cutting "<<ropeCutting(9,2,2,2);
}