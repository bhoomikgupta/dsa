#include <iostream>
void totalSum(int arr[], int n);
int prefixSum(int arr[], int l, int r);
using namespace std;
static int *ps;
int main()
{
     int arr[] = {10,20,60,50,40};
    ps = new int(5);
    totalSum(arr, sizeof(arr)/sizeof(int));
    for (int i =0; i<sizeof(arr)/sizeof(int);i++){
        cout <<ps[i] <<endl;
    }
    cout <<"Total prefix sum: "<<prefixSum(arr, 1,4);
}

void totalSum(int arr[], int n)
{
    ps[0] = arr[0];
    for(int i = 1;i<n;i++)
        ps[i] = ps[i-1] + arr[i]; 
    
}

int prefixSum(int arr[], int l, int r)
{
    if(l == 0)
        return ps[r];
    else
        return ps[r]- ps[l-1];
    
}