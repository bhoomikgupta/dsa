#include <iostream>
using namespace std;
int repeatingElement(int arr[], int n)
{
    int visit[n] = {0};
    for (int i = 0; i<n; i++){
        if (!visit[arr[i]])
            visit[arr[i]] = 1;
        else
            return arr[i];
    }
    
}

int repeatingElementEfficient(int arr[], int n)
{
    int slow = arr[0];
    int fast = arr[0];
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow!=fast);
    slow = arr[0];
    while (slow!=fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}
int main()
{
    int arr[] = {1,2,3,4,4,5,6,7};
    cout <<"repeating element :"<<repeatingElementEfficient(arr, sizeof(arr)/sizeof(int));
}