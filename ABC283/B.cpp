#include <iostream>

using namespace std;

int main()
{
    int N, A[100009], B[100009], Q;
    cin >> N;
    for (int i = 1; i <= N; i++){
        cin >> A[i];
    }
    cin >> Q;

    int m = 1;
    for (int i = 0; i < Q; i++){
        int t;
        cin >> t;
        if (t == 2){
            int k;
            cin >> k;
            B[m] = A[k];
            m++;
        } else {
            int k, x;
            cin >> k >> x;
            A[k] = x;
        }
    }


    for (int i = 1; i < m; i++){
        cout << B[i] << endl;
    }
    return 0;
}