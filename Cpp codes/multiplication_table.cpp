// Using a for loop to multiply and output a multiplication table
// This program asks for user input in order to obtain the number n to multiply with
// as well as the number to stop at

#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Input the number for which to multiply: " << endl; // The number to multiply with
	cin >> n;

	int stop;
	cout << "Up to what number should we multiply for " << n << "?" << endl; // The number to stop at
	cin >> stop;

	cout << "This is the multiplication table for " << n << " as specified:" << endl;

	for (int i = 1; i <= stop; i++) {
		cout << n << " x " << i << " = " << i * n << endl;
	}
	return 0;
}