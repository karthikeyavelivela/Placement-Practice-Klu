#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication is not possible";
        return 0;
    }

    int a[r1][c1], b[r2][c2], mul[r1][c2];

    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c2; j++)
            mul[i][j] = 0;

    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            cin >> a[i][j];

    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            cin >> b[i][j];

    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c2; j++)
            for(int k = 0; k < c1; k++)
                mul[i][j] += a[i][k] * b[k][j];

    cout << "Matrix multiplication is possible\n";
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++)
            cout << mul[i][j] << " ";
        cout << endl;
    }

    return 0;
}
