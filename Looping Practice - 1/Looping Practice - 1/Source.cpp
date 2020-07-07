#include <iostream>

using namespace std;

int main() {
	cout << "Looping Practices\n" << endl;

	int number = 0;
	int reverse = 0;

	cout << "Please enter a number: " << endl;
	cin >> number;

	while (number > 0) {
		reverse = (reverse * 10) + (number % 10);

		number /= 10;
	}

	cout << "The reverse is: " << reverse << endl;
	return 0;
}