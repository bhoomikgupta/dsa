#include <iostream>
using namespace std;
int countInversionAndMerge(int arr[],int low, int mid, int high)
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
    int res = 0;
    while(i<n1 && j<n2){
        if (left[i] <= right[j]){
            arr[k] = left[i];
            i++;
            k++;
        } else {
            arr[k] = right[j];
            res = res + (n1 - i);
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
    return res;
}

int countInversion(int arr[], int l, int r)
{
    int res = 0;
    if (r > l){
        int m = l + (r-l)/2;
        res += countInversion(arr, l, m);
        res += countInversion(arr,m+1, r);
        res += countInversionAndMerge(arr,l,m,r);
    }
    return res;
}
int main()
{
    int arr[] = {10,20,30,40,50};
    cout<<countInversion(arr, 0, sizeof(arr)/sizeof(int));
    // for(int i = 0; i<sizeof(arr)/sizeof(int);i++)
    //     cout<<arr[i]<<" ";
    return 0;
}