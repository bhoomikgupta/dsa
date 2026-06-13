#include <iostream>
using namespace std;
int peakElement(int arr[], int n)
{
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if((mid == 0 || arr[mid - 1]<= arr[mid]) && (mid == n-1 || arr[mid]>=arr[mid+1]))
            return mid;
        if(mid > 0 && (arr[mid -1] > arr[mid]))
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int main()
{
    int arr[] = {10,20,5,80,70,60,35,40};
    cout<<"found peak element at index "<<peakElement(arr, sizeof(arr)/sizeof(int));
}