#include <iostream>
using namespace std;
void print1toN(int);
void printNto1(int);
int factorial(int N, int K);
int fibonacci(int N);
int main()
{
    //print1toN(7);
    printNto1(7);
    cout<<factorial(30,1)<<endl;
    cout<<fibonacci(7)<<endl;
}

void print1toN(int N)
{
    if (N==0)
        return;
    print1toN(N-1);
    cout<<N<<endl;
}

//tail recursion
void printNto1(int N)
{
    if (N==0)
        return;
    cout<<N<<endl;
    printNto1(N-1);
}

//tail recursive factrial
int factorial(int N, int K)
{
    if (N ==  0 || N == 1)
        return K;
    
    return factorial(N-1, N*K);
}

int fibonacci(int N)
{
    if (N <= 1)
        return N;
    return fibonacci(N-1) + fibonacci(N-2);
}