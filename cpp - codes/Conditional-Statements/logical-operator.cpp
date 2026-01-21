#include <iostream>
using namespace std;

int main() {
    int age;
    char citizen;
    cin >> age >> citizen;

    if(age >= 18 && citizen == 'Y')
        cout << "Eligible to vote";
    else
        cout << "Not eligible";

    return 0;
}
