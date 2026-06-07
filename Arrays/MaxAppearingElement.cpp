#include <iostream>
int MaxAppearing(int leftArr[], int rightArr[], int n);
using namespace std;
int main()
{
    int leftArr[] = {1,4,5,6};
    int rightArr[] = {6,11,16,10};
    cout <<MaxAppearing(leftArr, rightArr, sizeof(leftArr) / sizeof(int));
}

int MaxAppearing(int leftArr[], int rightArr[], int n)
{
    int freqArr[101] = {0};

    for (int i = 0;i<n;i++){
        freqArr[leftArr[i]]++;
        freqArr[rightArr[i]]--;
    }

    int res = 0;
    for (int i = 1;i<100;i++){
        freqArr[i] = freqArr[i] + freqArr[i-1];
        if(freqArr[i]> freqArr[res])
            res = i;
    }
    return res;
}