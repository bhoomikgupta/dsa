#include <iostream>
using namespace std;
int squareRootFloor(int N)
{
    int low = 1;
    int high = N;
    int ans =  -1;
    while(low <= high){
        int mid = (low + high)/2;
        int mid_sqr = mid*mid;
        if (mid_sqr == N)
            return mid;
        else if (mid_sqr > N)
            high = mid - 1;
        else{
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}
int main()
{
    int n = 41;
    cout<<"square root of "<<squareRootFloor(n);
}