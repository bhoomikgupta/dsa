#include<iostream>
using namespace std;
int firstOccurence(int arr[], int low, int high, int x)
{
    int mid = (low + high)/2;
    if (low > high)
        return -1;
    if(arr[mid]>x)
        return firstOccurence(arr, low, mid -1, x);
    else if (arr[mid] < x)
        return firstOccurence(arr, mid + 1, high, x);
    else{
        if (mid == 0 || arr[mid]!= arr[mid -1])
            return mid;
        else
            return firstOccurence(arr,low,mid -1,x);
    }
}

int iterativeFirstOccurence(int arr[], int n, int x)
{
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else{
            if(mid == 0 || arr[mid - 1] != arr[mid])
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int lastOccurence(int arr[], int low, int high, int x)
{
    int mid = (low + high)/2;
    if (low > high)
        return -1;
    if(arr[mid]>x)
        return lastOccurence(arr, low, mid -1, x);
    else if (arr[mid] < x)
        return lastOccurence(arr, mid + 1, high, x);
    else{
        if (mid == 0 || arr[mid]!= arr[mid +1])
            return mid;
        else
            return lastOccurence(arr,mid + 1,high,x);
    }
}

int iterativeLastOccurence(int arr[], int n, int x)
{
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else{
            if(mid == 0 || arr[mid + 1] != arr[mid])
                return mid;
            else
                low = mid + 1;
        }
    }
    return -1;
}

int countOccurence(int arr[], int n, int x)
{
    int first = iterativeFirstOccurence(arr, n, x);
    if(first == -1)
        return 0;
    return iterativeLastOccurence(arr, n, x) - first + 1;
}

int main()
{
    int arr[] = {10,20,20,20,40,50,60,70,70};
    int found = iterativeLastOccurence(arr,sizeof(arr)/sizeof(int),20);
    if(found !=-1)
        cout<< "found at index: "<<found<<endl; 
    cout<<"total no. of occurence: "<<countOccurence(arr,sizeof(arr)/sizeof(int),20);
}