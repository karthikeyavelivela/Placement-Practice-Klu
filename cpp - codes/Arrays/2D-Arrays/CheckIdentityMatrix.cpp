#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    bool identity = true;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0))
                identity = false;
        }
    }

    if(identity)
        cout << "Identity Matrix";
    else
        cout << "Not an Identity Matrix";

    return 0;
}
