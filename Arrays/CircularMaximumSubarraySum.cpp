#include <iostream>
int normalSubarraySum(int arr[], int n);
int circularSubarraySum(int arr[], int n);
using namespace std;
int main()
{
    int arr[] = {10,23,-41,34,67,-89,13};
    cout <<circularSubarraySum(arr, sizeof(arr) / sizeof(int));
    return 0;
}

int normalSubarraySum(int arr[], int n)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(arr[i] + maxEnding, arr[i]);
        res = max(maxEnding, res);
    }
    return res;
}

int circularSubarraySum(int arr[], int n)
{
    int maxSubSum = normalSubarraySum(arr, n);
    if (maxSubSum < 0){
        return maxSubSum;
    }
    int arr_sum = 0;
    for (int i = 0;i<n;i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int circularSubArrSum = arr_sum + normalSubarraySum(arr, n);
    return max(maxSubSum, circularSubArrSum);
}