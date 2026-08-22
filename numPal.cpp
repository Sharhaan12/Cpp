#include <iostream>
using namespace std;
int main() 
{
    int n, r = 0, temp;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while (temp > 0) 
    {
        r = r * 10 + temp % 10;
        temp /= 10;
    }
    if (r == n)
        cout << "Palindrome";
    else
        cout << "Not a Palindrome";
    return 0;
}
