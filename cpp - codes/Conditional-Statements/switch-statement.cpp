#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    cin >> a >> op >> b;

    switch(op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/':
            if(b != 0)
                cout << a / b;
            else
                cout << "Division by zero";
            break;
        default:
            cout << "Invalid operator";
    }

    return 0;
}
