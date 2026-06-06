#include <iostream>
using namespace std;
int search(int arr[], int n, int x);
int main()
{
    int n;
    int x;
    int found = -1;
    cout << "Enter capacity of an array";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array list";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ,";
    }
    cout << "Enter search element in array";
    cin >> x;
    found = search(arr, n, x);
    if (found != -1)
        cout << "Found at index: " << found;
    return 0;
}

int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int insert(int arr[], int n, int x, int cap, int pos)
{
    if (n == cap)
        return n;

    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--)
        arr[i + 1] = arr[i];

    arr[idx] = x;
    return (n + 1);
}

int deleteEle(int arr[], int n, int x)
{
    int i;

    for (i = 0; i < n; i++)
        if (arr[i] == x)
            break;

    if (i == n)
        return n;

    for (int j = i; j < n - 1; j++)
        arr[j] = arr[j + 1];

    return (n - 1);
}