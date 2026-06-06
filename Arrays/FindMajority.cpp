#include <iostream>
int findMajority(int arr [], int n);
using namespace std;
int main()
{
    int arr[] = {10,20,10,10,10,40,10};
    cout <<arr[findMajority(arr, sizeof(arr) / sizeof(int))];
    return 0;
}

int findMajority(int arr [], int n)
{
    int res = 0;
    int count = 1;
    for(int i = 1; i<n;i++){
        if(arr[res] == arr[i])
            count++;
        else
            count--;
        if(count == 0){
            res = i;
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i<n;i++){
        if(arr[res] == arr[i])
            count++;
    }
    if (count <= n/2)
        return -1;
    return res;
}