#include<iostream>
using namespace std;
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

int infiniteSearchArray(int arr[], int x)
{
    if (arr[0] == x)
        return 0;
    int i = 1;
    for(i = 1; arr[i] < x; i = i*2){
        if(arr[i] == x)
            return i;
    }
    return recursiveBinarySearch(arr, i/2 + 1, i, x);
}
int main()
{
    int arr[] = {10,20,30,40,50,70,90,100,120,122,145,146,243,245};
    cout<< "found at index :"<<infiniteSearchArray(arr, 120);
}