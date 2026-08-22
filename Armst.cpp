#include <iostream>
using namespace std;

int main() {
	int n, original, digits = 0, sum = 0;
	cout << "Enter number: ";
	cin >> n;
	original = n;

	for (int t = n; t; t /= 10) digits++;
	for (int t = n; t; t /= 10) {
		int digit = t % 10, power = 1;
		for (int i = 0; i < digits; i++) power *= digit;
		sum += power;
	}

	cout << (sum == original ? "Armstrong number" : "Not an Armstrong number");
	return 0;
}
