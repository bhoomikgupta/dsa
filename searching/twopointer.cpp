#include <iostream>
using namespace std;
bool isPair(int arr[], int n, int sum, int si)
{
    int i = si;
    int j = n-1;
    while(i<=j)
    {
        if (arr[i] + arr[j] == sum)
            return true;
        else if (arr[i] + arr[j] > sum)
            j--;
        else
            i++;
    }
    return false;
}

bool isTriplet(int arr[], int n, int sum)
{
    for (int i = 0; i<n-2;i++){
        if (isPair(arr, n, sum - arr[i], i))
            return true;
    }
    return false;
}
int main()
{
    int arr[] = {12,14,24,56,67,89};
    int sum = 38;
    if (isPair(arr, sizeof(arr)/sizeof(int), sum, 0)){
        cout<<"found pair";
    }
    sum = 50;
    if (isTriplet(arr, sizeof(arr)/sizeof(int), sum)){
        cout<<"found triplet";
    }
}