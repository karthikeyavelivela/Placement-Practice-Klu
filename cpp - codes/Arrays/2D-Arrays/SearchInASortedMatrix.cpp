#include <iostream>
using namespace std;

int main() {
    int r, c, key;
    cin >> r >> c;
    int a[r][c];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> a[i][j];

    cin >> key;

    int i = 0, j = c - 1;
    while(i < r && j >= 0) {
        if(a[i][j] == key) {
            cout << "Found";
            return 0;
        }
        else if(a[i][j] > key)
            j--;
        else
            i++;
    }
    cout << "Not Found";
    return 0;
}
