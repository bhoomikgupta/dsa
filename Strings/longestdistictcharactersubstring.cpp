#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int longestDistinct(string str1);
int main()
{
    string str1 = "abcadbd";
    cout<<"Rank of LexiographicRankString :"<<longestDistinct(str1);
}

// int longestDistinct(string str1)
// {
//     int n = str1.length();
//     int res = 0;
//     int i =0;
//     vector<int> prev(256, -1);

//     for(int j = 0; j<n;j++){
//         i = max(i, prev[str1[j]] +1);
//         int maxEnd = j -i +1;
//         res = max(res, maxEnd);
//         prev[str1[j]] = j;
//     }
//     return res;
// }

int longestDistinct(string str1)
{
    int res = 0;
    int n  = str1.length();
    for (int i = 0 ; i<n ;i++){
        vector<int> visit(256,false);
        for(int j = i; j<n; j++){
            if(visit[str1[j]]!= false)
                break;
            else{
                res = max(res, j - i + 1);
                visit[str1[j]] = true;
            }
        }
    }
    return res;
}