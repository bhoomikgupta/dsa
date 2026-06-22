#include <iostream>
using namespace std;
int hoarePartition(int arr[], int low, int high);
int kthSmallestElement(int arr[], int n, int k);
int main()
{
    int arr[] = {10,40,30,50,70,60};
    cout<<arr[kthSmallestElement(arr, sizeof(arr)/sizeof(int),1)];
    return 0;
}

int hoarePartition(int arr[], int low, int high)
{
   int pivot = arr[low];
   int i = low -1;
   int j = high +1;
   while(true){
    do{
        i++;
    } while (arr[i]<pivot);

    do{
        j--;
    } while (arr[j]>pivot);
     if(i>=j)
        return j;
    swap(arr[i], arr[j]); 
}
}
int kthSmallestElement(int arr[], int n, int k)
{
    int low = 0;
    int high = n -1;
    while(low <= high){
        int p = hoarePartition(arr, low, high);
        if (p == k-1)
            return p;
        else if (p > k -1)
            high = p - 1;
        else
            low = p + 1;
    }
    return -1;
}