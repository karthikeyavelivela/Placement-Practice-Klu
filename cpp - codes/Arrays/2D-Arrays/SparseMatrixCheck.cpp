#include <iostream>
using namespace std;

//If the number of zero elements is greater than the number of non-zero elements, then it is called a sparse matrix.

int main() {
    int r, c;
    cin >> r >> c;
    int a[r][c];

    int zeroCount = 0;
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
            if(a[i][j] == 0) zeroCount++;
        }

    if(zeroCount > (r * c) / 2)
        cout << "Sparse Matrix";
    else
        cout << "Not Sparse";

    return 0;
}
