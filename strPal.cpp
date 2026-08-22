#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, rev;
    cin >> s;

    for (int i = s.size() - 1; i >= 0; --i)
        rev += s[i];

    cout << (s == rev ? "Palindrome" : "Not palindrome");
}
