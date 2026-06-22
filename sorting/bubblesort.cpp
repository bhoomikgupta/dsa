#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for(int i = 0; i<n-1; i++){
        bool swapped = false;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
int main()
{
    int arr[] = {10,40,30,50,70,60};
    bubbleSort(arr, sizeof(arr)/sizeof(int));
    for(int i = 0; i<sizeof(arr)/sizeof(int);i++)
        cout<<arr[i]<<" ";
    return 0;
}