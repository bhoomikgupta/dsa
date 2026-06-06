#include <iostream>
int maxConsecutiveOne(int arr[], int n);
using namespace std;
int main()
{
    int arr[] = {1,0,1,1,1,1,0,1,1,1};
    cout <<maxConsecutiveOne(arr, sizeof(arr) / sizeof(int));
}

int maxConsecutiveOne(int arr[], int n)
{
    int count = 0;
    int res = 0;
    for (int i = 0; i<n; i++){
        if(arr[i] == 0)
            count = 0;
        else{
            count++;
            res = max(count, res);
        }

    }
    return res;
}
