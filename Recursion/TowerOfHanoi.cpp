#include<iostream>
using namespace std;
void towerOfHanoi(int n, char source, char auxiliary, char destination)
{
    if(n==1){
        cout<<"Move 1 from "<<source<<" to "<<destination<<endl;
        return;
    }

    towerOfHanoi(n-1, source, destination, auxiliary);
    cout<<"Move "<<n <<" from "<<source<<" to "<<destination<<endl;
    towerOfHanoi(n-1, auxiliary, source, destination);

}
int main()
{
    towerOfHanoi(5, 'A', 'B', 'C');
}