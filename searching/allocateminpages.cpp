#include <iostream>
#include <cstdint>
using namespace std;
// int sum(int arr[], int b, int e)
// {
//     int sum = 0;
//     for(int i = b; i<=e; i++)
//         sum+=arr[i];
    
//     return sum;
// }
// int minPages(int arr[], int n, int k)
// {
//     if (k == 1)
//         return sum(arr,0,n-1);
//     else if (n == 1)
//         return arr[0];
//     int res = INT32_MAX;
//     for (int i = 1; i<n; i++)
//         res = min(res, max(minPages(arr,i, k-1), sum(arr,i,n-1)));
//     return res;
// }

int isFeasible(int arr[], int n, int k, int ans)
{
    int req = 1;
    int sum = 0;
    for (int i = 0; i<n;i++){
        if (sum + arr[i] > ans){
            req++;
            sum = arr[i];
        }
        else
            sum += arr[i];
    }
    return (req<=k);
}
int minPages(int arr[], int n, int k)
{
    int sum = 0;
    int mx = 0;
    int res = 0;
    for(int i =0; i<n;i++){
        sum += arr[i];
        mx = max(mx, arr[i]);
    }
    int low = mx;
    int high = sum;
    while(low<=high){
        int mid = (low + high)/2;
        if (isFeasible(arr,n,k,mid)){
            res = mid;
            high = mid -1;
        } else {
            low = mid + 1;
        }
    }
    return res;
}

int main()
{
    int arr[] = {10,20,30,40};
    int k = 2;
    int n = sizeof(arr)/sizeof(int);
    cout<<"Min Pages: "<<minPages(arr, n,k);
}