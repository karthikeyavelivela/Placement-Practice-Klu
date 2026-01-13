#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    int sum = 0;

    cout << "First Diaginal : " ;
    for(int i = 0; i < n; i++) {
        cout << a[i][i] << " ";          // Primary
        sum += a[i][i];
    }
    cout << endl;

    cout << "Second Diaginal : " ;
    for(int i = 0; i < n; i++) {
        cout << a[i][n - i - 1] << " ";  // Secondary
        sum += a[i][n - i - 1];
    }

    cout << "\nDiagonal Sum = " << sum;
    return 0;
}
