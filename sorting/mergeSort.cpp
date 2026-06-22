#include <iostream>
using namespace std;
void merge(int arr[],int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - low;
    int left[n1];
    int right[n2];
    int i,j, k= low;
    for (i = 0; i<n1;i++)
        left[i] = arr[low + i];
    for (i = 0; i<n2;i++)
        right[i] = arr[mid + i + 1];
    i=0;
    j=0;
    k=low;
    while(i<n1 && j<n2){
        if (left[i] <= right[j]){
            arr[k] = left[i];
            i++;
            k++;
        } else {
            arr[k] = right[j];
            j++;
            k++;
        }
    }
    while (i < n1){
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (r > l){
        int m = l + (r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr,m+1, r);
        merge(arr,l,m,r);
    }
}
int main()
{
    int arr[] = {10,40,30,50,70,60};
    mergeSort(arr, 0, sizeof(arr)/sizeof(int));
    for(int i = 0; i<sizeof(arr)/sizeof(int);i++)
        cout<<arr[i]<<" ";
    return 0;
}