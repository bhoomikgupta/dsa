#include <iostream>
int maximumSumSubarray(int arr[], int n);
using namespace std;
int main()
{
    int arr[] = {10,23,-41,34,67,-89,13};
    cout <<maximumSumSubarray(arr, sizeof(arr) / sizeof(int));
}

int maximumSumSubarray(int arr[], int n)
{
    int maxSum = arr[0];
    int res = arr[0];

    for(int i = 1; i<n; i++){
        maxSum = max(maxSum + arr[i], arr[i]);
        res = max(res, maxSum);
    }
    return res;
}