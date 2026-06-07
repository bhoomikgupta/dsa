#include <iostream>
bool eqPoint(int arr[], int n);
using namespace std;
int main()
{
    int arr[] = {3,4,8,-9,7,7};
    if (eqPoint(arr, sizeof(arr) / sizeof(int)))
        cout<<"yes";
    else
        cout <<"no";
}

bool eqPoint(int arr[], int n)
{
    int ls = 0;
    int rs = 0; 
    for(int i = 0; i<n; i++){
        rs+= arr[i];
    }

    for(int i = 0; i<n;i++){
        rs-= arr[i];
        if(rs == ls) 
            return true;
        ls+= arr[i];
    }
    return false;
}