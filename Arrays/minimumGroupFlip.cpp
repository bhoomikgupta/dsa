#include <iostream>
void minimumGroup(int arr[], int n);
using namespace std;
int main()
{
    int arr[] = {0,1,1,1,0,1,1,0,0,0,1};
    minimumGroup(arr, sizeof(arr) / sizeof(int));
    return 0;    
}

void minimumGroup(int arr[], int n)
{
    int i =0;
    for (i =1;i<n;i++){
        if(arr[i-1] != arr[i]){
            if (arr[i] != arr[0]) {
                cout<<"from: " <<i << "to: ";
            }
            else {
                cout <<(i-1) <<endl;
            }
        }
    }
   if(arr[n-1] != arr[0])
        cout<<(n-1) <<endl;

}