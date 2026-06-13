#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int x)
{
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == x)
            return mid;
        else if(arr[mid]>x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int recursiveBinarySearch(int arr[], int low, int high, int x)
{
    int mid =  (low + high)/2;
    if (arr[mid] == x)
        return mid;
    if(arr[mid]>x)
        return recursiveBinarySearch(arr, low, mid - 1, x);
    else
        return recursiveBinarySearch(arr, mid + 1, high, x);
}
int main()
{
    int arr[] = {10,20,30,40,50};
    // int found = binarySearch(arr, sizeof(arr)/sizeof(int),20);
    int found = recursiveBinarySearch(arr,0,sizeof(arr)/sizeof(int),20);
    if(found !=-1)
        cout<< "found at index: "<<found<<endl; 
}