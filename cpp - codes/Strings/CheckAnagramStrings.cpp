#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if(s1.length() != s2.length()) {
        cout << "Not Anagram";
        return 0;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    cout << (s1 == s2 ? "Anagram" : "Not Anagram");
}
