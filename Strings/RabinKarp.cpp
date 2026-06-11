#include <iostream>
#include <string>
using namespace std;
void rabinKarp(string str1, string str2);
int main()
{
    string str1 = "AABCDE";
    string str2 = "ABCDE";
    rabinKarp(str1, str2);
}
//todo
void rabinKarp(string str1, string str2)
{
    int n = str1.length();
    int m = str2.length();

    int h = 1;
    int d = 5;
    int q = 13;
    for(int i = 0; i<m; i++){
        h = (h * d) % q;
    }

    int p = 0;
    int t = 0;

    for(int i = 0; i<m; i++){
        p = (p*d + str2[i]) %q;
        t = (t*d + str1[i]) %q;
    }
    
    for(int i = 0; i <= n-m;i++){
        if(p==t){
            bool flag = true;
            for (int j = 0; j<m;j++){
                if(str1[i+j]!= str2[j])
                {
                    flag =  false;
                    break;
                }
            }
            if(flag == true)
                cout<<i<<" ";   
        }
        if(i < n-m){
            t = (d*(t - str1[i]*h) + str1[i+m])%q;
            if(t<0)
            {
                t = t+q;
            }
        }
    }
}

