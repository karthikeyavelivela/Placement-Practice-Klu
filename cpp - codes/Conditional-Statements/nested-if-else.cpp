#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a > b) {
        if(a > c)
            cout << a << " is greatest";
        else
            cout << c << " is greatest";
    } else {
        if(b > c)
            cout << b << " is greatest";
        else
            cout << c << " is greatest";
    }

    return 0;
}
