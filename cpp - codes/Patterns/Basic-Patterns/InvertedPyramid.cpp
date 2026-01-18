#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = n; i >= 1; i--) {
        // spaces
        for(int s = 1; s <= n - i; s++) {
            cout << " ";
        }
        // stars
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
