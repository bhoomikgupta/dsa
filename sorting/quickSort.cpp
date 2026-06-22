#include <iostream>
using namespace std;
int hoarePartition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
int main()
{
    int arr[] = {10,40,30,50,70,60};
    quickSort(arr, 0, sizeof(arr)/sizeof(int));
    for(int i = 0; i<sizeof(arr)/sizeof(int);i++)
        cout<<arr[i]<<" ";
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
void quickSort(int arr[], int low, int high)
{
    if (low < high){
        int p = hoarePartition(arr,low, high);
        quickSort(arr,low,p);
        quickSort(arr, p+1, high);
    }
}