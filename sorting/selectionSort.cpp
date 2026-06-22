#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j < n; j++){
            if (arr[j]< arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main()
{
    int arr[] = {10,40,30,50,70,60};
    selectionSort(arr, sizeof(arr)/sizeof(int));
    for(int i = 0; i<sizeof(arr)/sizeof(int);i++)
        cout<<arr[i]<<" ";
    return 0;
}