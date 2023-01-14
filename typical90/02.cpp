#include <iostream>
#include <string>
#include <vector>
#include <array>

using namespace std;

vector<string> braketSort(int n);
vector<string> mergeString(string A[], string B[]);

int main()
{
    int N;
    cin >> N;
    if (N % 2 != 0){
        return 0;
    }
    vector<string> S = braketSort(N);
    for (auto i: S){
        cout << i << endl;
    }
    return 0;
}

vector<string> braketSort(int n)
{
    if (n == 2){
        return {"()"};
    } else {
        vector<string> x = {};
        vector<string> A, B, C = {};
        vector<string> arr = braketSort(n - 2);
        for (auto i: arr){
            A.push_back("(" + i + ")");
            if (i + "()" == "()" + i){
                B.push_back(i + "()");
            } else {
                B.push_back(i + "()");
                C.push_back("()" + i);
            }
        }
        
        
    return x;
    }
}

vector<string> mergeString(string A[], string B[])
{
    vector<string> x = {};
    while (A.size() * B.size() > 0){

    }
}