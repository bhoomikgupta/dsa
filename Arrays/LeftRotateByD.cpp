#include <iostream>
void leftRotateByD(int arr[], int n, int d);
void reverse(int arr[], int n, int d);
using namespace std;
int main()
{
    int arr[] = {10, 20,30, 40, 50, 60};

    leftRotateByD(arr, sizeof(arr)/sizeof(int), 2);
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        cout<<arr[i]<<", ";
    }
    cout << endl;

}

void reverse(int arr[], int low, int high)
{
    while(low < high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] =  temp; 
        low++;
        high--;
    }
}
void leftRotateByD(int arr[], int n, int d)
{
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}