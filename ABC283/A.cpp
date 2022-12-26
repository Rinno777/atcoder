#include <iostream>

using namespace std;

int main()
{
    int A, B;
    long long ans = 1;
    cin >> A >> B;

    for (int i = 0; i < B; i++){
        ans *= A;
    }

    cout << ans << endl;
    return 0;
}