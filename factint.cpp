#include <iostream>
using namespace std;
int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int result = 1;
    for (int i = 2; i <= num; i++) 
    {
        result *= i;
    }

    cout << "Factorial of " << num << " is: " << result << endl;
    return 0;
}