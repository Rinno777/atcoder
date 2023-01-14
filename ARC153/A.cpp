#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<long long> ans(N);
    ans[0] = 110000000;
    for (int i = 1; i < N; i++){
        long long x = ans[i - 1] + 1;
        string y = to_string(x);
        while (y[8] != y[6] || y[5] != y[4] || y[1] != y[0]){
            if (y[8] != y[6]){
                x++;
            } else if (y[5] != y[4]){
                x += 1000;
            } else if (y[1] != y[0]){
                x += 10000000;
            }
            y = to_string(x);
        }
        ans[i] = x;
    }
    cout << ans[N - 1] << endl;
}