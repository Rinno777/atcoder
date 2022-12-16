#include <iostream>

using namespace std;

int main()
{
    int Kin;
    cin >> Kin;
    const char Arr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I' ,'J' ,'K' ,'L' ,'M' ,'N' ,'O' ,'P' ,'Q' ,'R' ,'S' ,'T' ,'U' ,'V' ,'W' ,'X' ,'Y' ,'Z'};
    for (int i = 0; i < Kin; i++){
        cout << Arr[i];
    }
    cout << endl;
    return 0;
}