#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int v=0, c=0, d=0, sp=0;
    for(char ch : s) {
        if(ch==' ') sp++;
        else if(isdigit(ch)) d++;
        else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            v++;
        else if(isalpha(ch)) c++;
    }

    cout << "Vowels: " << v << "\nConsonants: " << c
         << "\nDigits: " << d << "\nSpaces: " << sp;
}
