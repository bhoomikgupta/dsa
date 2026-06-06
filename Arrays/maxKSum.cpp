#include <iostream>
int maxKSum(int arr[], int n, int k);
using namespace std;
int main()
{
    int arr[] = {10,23,-41,34,67,-89,13};
    cout <<maxKSum(arr, sizeof(arr) / sizeof(int), 2);
}

int maxKSum(int arr[], int n, int k)
{
    int res = 0;
    int cur = 0;
    for (int i = 0; i<k;i++)
    {
        cur += arr[i];
    }
    res = cur;
    for (int i = k ;i<n; i++){
        cur = cur + arr[i] - arr[i-k];
        res = max(cur, res);
    }
    return res;
    
}