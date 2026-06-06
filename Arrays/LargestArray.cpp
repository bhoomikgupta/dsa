#include <iostream>
int findLargestIndex(int arr[], int n);
int secondLargestIndex(int arr[], int n);
int arraySorted(int arr[], int n);
void reverseArray(int arr[], int n);
int removeDuplicate(int arr[], int n);
void moveZeroes(int arr[], int n);
using namespace std;
int main()
{
    int largest = 0;
    int arr[] = {0, 0, 10, 20, 60, 60};
    largest = secondLargestIndex(arr, sizeof(arr) / sizeof(int));
    cout << largest;

    if (arraySorted(arr, sizeof(arr) / sizeof(int)))
        cout << "Array is sorted" << endl;

    for (int i = 0; i < removeDuplicate(arr, sizeof(arr) / sizeof(int)); i++)
    { // sorted array
        cout << arr[i] << ", ";
    }
    cout << endl;
    moveZeroes(arr, sizeof(arr) / sizeof(int));
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << arr[i] << ", ";
    }

    cout << endl;
    reverseArray(arr, sizeof(arr) / sizeof(int));
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << arr[i] << ", ";
    }
}

int findLargestIndex(int arr[], int n)
{
    int ret = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[ret] < arr[i])
            ret = i;
    }

    return ret;
}

int secondLargestIndex(int arr[], int n)
{
    int res = -1, largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
                res = i;
        }
    }
    return res;
}

int arraySorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
            return false;
    }
    return true;
}

void reverseArray(int arr[], int n)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
    return;
}

int removeDuplicate(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

void moveZeroes(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[count];
            arr[count] = arr[i];
            arr[i] = temp;
            count++;
        }
    }
}