#include <iostream>
using namespace std;
void sort3types(int arr[], int n)
{
   int low = 0;
   int mid = 0;
   int high = n -1;
   while(mid <= high){
    if (arr[mid] == 0){
        swap(arr[mid], arr[low]);
        low++;
        mid++;
    } else if(arr[mid] == 1){
        mid++;
    } else{
        swap(arr[high], arr[mid]);
        high--;
    } 
   }
}
int main()
{
    int arr[] = {0,1,2,2,0,1,1,1,0,0};
    sort3types(arr, sizeof(arr)/sizeof(int));
    for(int i = 0; i<sizeof(arr)/sizeof(int);i++)
        cout<<arr[i]<<" ";
}