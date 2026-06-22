#include <iostream>
#include <algorithm>
using namespace std;
struct interval{
    int start;
    int end;
};
bool customComparison(struct interval a, struct interval b)
{
    // Custom comparison logic
    return a.start < b.start; // it sorts in ascending order
}
void mergeInterval(struct interval arr[], int n){
    sort(arr, arr + n, customComparison);
    int res = 0;
    
    for (int i=1; i<n;i++){
        if(arr[res].end >= arr[i].start){
            arr[res].start = min(arr[res].start, arr[i].start);
            arr[res].end = max(arr[res].end, arr[i].end);
        } else{
            res++;
            arr[res] = arr[i];
        }
    }
    for (int i=0; i<=res;i++){
        cout<<"{"<<arr[i].start<<", "<<arr[i].end<<"}"<<" ";
    }
}
int main()
{
    struct interval arr[] = {{5,10},{3,15}, {18, 30}, {19,41}};
    mergeInterval(arr, sizeof(arr)/sizeof(struct interval));
}