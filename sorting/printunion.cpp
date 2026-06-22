#include <iostream>
using namespace std;
void unionSortedArray(int arr1[], int n, int arr2[], int m)
{
    int i = 0;
    int j = 0;
    while(i<n && j <m){
        if (i>0 && (arr1[i] == arr1[i-1])){
            i++;
            continue;
        }
        if (j>0 && (arr1[j] == arr1[j-1])){
            j++;
            continue;
        }
        if (arr1[i] < arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        } else if (arr1[i] > arr2[j]){
            cout<<arr2[j]<<" ";
            j++;
        } else {
            cout <<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    while (i < n){
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j < m){
        cout<<arr2[j]<<" ";
        j++;
    }

}
int main()
{
    int arr1[] = {10,30,30,50,70,60};
    int arr2[] = {10,30,30,70};
    unionSortedArray(arr1, sizeof(arr1)/sizeof(int),arr2, sizeof(arr2)/sizeof(int));
    return 0;
}