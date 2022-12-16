#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int ans = 0;

    char A[39][39];
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    for (int i = 0; i < N; i++){
        for (int j = i + 1; j < M; j++){
            int k = 0;
            while (k < M){
                if (A[i][k] == 'o' || A[j][k] == 'o') k++;
                else break;
            }
            if (k == M) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}