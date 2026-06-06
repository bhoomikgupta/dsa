#include <iostream>
int longestEvenOddSubarray(int arr[], int n);
using namespace std;
int main()
{
    int arr[] = {2,3,4,14,7,8,9,26};
    cout <<longestEvenOddSubarray(arr, sizeof(arr) / sizeof(int));
}

int longestEvenOddSubarray(int arr[], int n)
{
    int res=1;
    int maxevenodd=1;
    for (int i = 1; i<n; i++){
        if((arr[i-1]%2==0 && arr[i]%2!=0) || (arr[i-1]%2!=0 && arr[i]%2!=0)){
            maxevenodd++;
            res = max(res, maxevenodd);
        }
    }
    return res;
}