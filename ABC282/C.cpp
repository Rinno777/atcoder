#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long N;
    char S[200009];
    cin >> N;
    cin >> S;

    bool flag = false;

    for (int i = 0; i < N; i++){
        if (S[i] == '"'){
            flag = !flag;
            continue;
        }
        if (S[i] == ',' && !flag) S[i] = '.';
    }

    cout << S << endl;
    return 0;
}