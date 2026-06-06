#include <iostream>
int maximumDifference(int arr[], int n);
using namespace std;
int main()
{
    int arr[] = {10,20,60,50,40};
    cout << maximumDifference(arr, sizeof(arr) / sizeof(int));

}

int maximumDifference(int arr[], int n)
{
    int res = arr[1] - arr[0]; 
    int minval = arr[0];
    for (int i = 1;i <n;i++){
        res = max(res, arr[i] - minval);
        minval = min(minval, arr[i]);
    }
    return res;
}