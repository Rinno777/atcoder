#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string S;
    cin >> S;
    long long N = S.size();

    for (int i = 0; i < S.size() - 1; i++){
        if (S[i] == '0' && S[i + 1] == '0'){
            N--;
            i++;
        }
    }

    cout << N << endl;
    return 0;
}