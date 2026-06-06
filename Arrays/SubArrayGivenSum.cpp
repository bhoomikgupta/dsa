#include <iostream>
void isSubSum(int arr[], int n, int sum);
using namespace std;
int main()
{
    int arr[] = {10,23,41,34,67,89,13};
    isSubSum(arr, sizeof(arr) / sizeof(int), 101);
}

void isSubSum(int arr[], int n, int sum)
{
    int cur = 0;
    int s = 0;

    for( int i= 0 ; i <n;i++)
    {
        cur += arr[i];
        while (sum < cur){
            cur -= arr[s];
            s++;
        }
        if (sum == cur){
            cout <<"yes";
            return;
        }
    }
    cout <<"no";
    return;
}