#include <iostream>
using namespace std;
void sort2types(int arr[], int n)
{
    int i = -1;
    int j = n;
    do{
        i++;
    }while(arr[i] <0);

    do{
        j--;
    }while(arr[j]>=0);

    if(i>=j)
        return;
    swap(arr[j], arr[i]);
}
int main()
{
    int arr[] = {-10,-20,-5,34,23,7,8,9};
    sort2types(arr, sizeof(arr)/sizeof(int));
    for(int i = 0; i<sizeof(arr)/sizeof(int);i++)
        cout<<arr[i]<<" ";
}