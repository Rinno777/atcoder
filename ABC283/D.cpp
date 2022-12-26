#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;
    cin >> S;
    char A[10];
    int B[300009], C[27];
    int k = 0;

    for (int i = 0; i < S.size(); i++){
        if ('a' <= S[i] && S[i] <= 'z'){
            A[i] = (int)(S[i] - 'a' + 1);
            cout << (int)(S[i] - 'a' + 1) << endl;
        } else if (S[i] == '(') {
            A[i] = S[i];
            B[k] = 'i';
            k++;
        } else {
            A[i] = S[i];
        }
    }
    for (auto i: A){
        cout << i << endl;
    }

    int n = -1;
    int m = -1;
    for (int i = 0; i < S.size(); i++){
        if (A[i] == ')'){
            for (int j = B[m - n]; j < i; j++){
                if (A[j] != '(' && A[j] != ')'){
                    C[(int)A[j]] = 0;
                }
            }
            n--;
        } else if (A[i] == '('){
            m++;
            n++;
        } else {
            if (C[(int)A[i]] == 1){
                cout << "No" << endl;
                return 0;
            } else {
                C[(int)A[i]] = 1;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}