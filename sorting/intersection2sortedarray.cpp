#include <iostream>
using namespace std;
void intersectionSortedArray(int arr1[], int n, int arr2[], int m)
{
    int i = 0;
    int j = 0;
    while(i<n && j <m){
        if (i>0 && (arr1[i] == arr1[i-1])){
            i++;
            continue;
        }
        if (arr1[i] < arr2[j]){
            i++;
        } else if (arr1[i] > arr2[j]){
            j++;
        } else {
            cout <<arr1[i]<<" ";
            i++;
            j++;
        }
    }
}
int main()
{
    int arr1[] = {10,30,30,50,70,60};
    int arr2[] = {10,30,30,70};
    intersectionSortedArray(arr1, sizeof(arr1)/sizeof(int),arr2, sizeof(arr2)/sizeof(int));
    return 0;
}