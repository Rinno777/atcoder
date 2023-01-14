#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> table(h);
    for (int i = 0; i < h; i++){
        string A;
        cin >> A;
        table[i] = A;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;
        vector<vector<char>> A(a, vector<char>(b));
        vector<vector<char>> B(a, vector<char>(w - b));
        vector<vector<char>> C(h - a, vector<char>(b));
        vector<vector<char>> D(h - a, vector<char>(w - b));
        for (int j = 0; j < h; j++){
            if (j < a){
                for (int k = 0; k < w; k++){
                    if (k < b){
                        A[a - j][b - k] = table[j][k];
                    } else {
                        B[a - j][w - k] = table[j][k];
                    }
                }
            } else {
                for (int k = 0; k < w; k++){
                    if (k < b){
                        C[h - j][b - k] = table[j][k];
                    } else {
                        D[h - j][w - k] = table[j][k];
                    }
                }
            }
        }
        vector<string> table2(h);
        for (int j = 0; j < h; j++){
            if (j < a){
                for (int k = 0; k < w; k++){
                    if (k < b){
                        table2[j] += A[j][k];
                    } else {
                        table2[j] += B[j][k - b];
                    }
                }
            } else {
                for (int k = 0; k < w; k++){
                    if (k < b){
                        table2[j] += C[j - a][k];
                    } else {
                        table2[j] += D[j - a][k - b];
                    }
                }
            }
        }
        table = table2;
    }
    for (int i = 0; i < h; i++){
        cout << table[i] << endl;
    }
}