#include <iostream>
int StockBuySell(int arr[], int n);
using namespace std;
int main()
{
    int arr[] = {10,20,60,50,40};
    cout <<"Total Profit: "<<StockBuySell(arr, sizeof(arr)/sizeof(int));
}

int StockBuySell(int arr[], int n)
{
    int profit = 0;
    for (int i = 1; i<n; i++){
        if (arr[i-1] < arr[i]){
            profit += arr[i] - arr[i-1]; 
        }
    }
    return profit;
}