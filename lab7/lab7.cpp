#include <iostream>
using namespace std;

int main() {

	cout << "Question 1:\n";
		int number, temp, sum = 0;
	cout << "Please input a 4-digit positive integer: ";
	cin >> number;
	if (number < 1000 || number > 9999) {
		cout << "You have entered an invalid number. Goodbye!" << endl;
		return 0;
	}
	temp = number;
	while (temp > 0) {
	sum += temp % 10;
	temp = temp / 10;
	}
	cout << "The sum of all digits in " << number << " is " << sum << ".\n";
//___________________	
	cout << "\nQuestion 2:\n";
	int n = 1;										
	while (n * n < 11000){
	n = n + 1;
																}
	cout << n << " is the smallest positive integer n such that n*n is greater than 11,000\n";
	n = 1;	//re-initialize the variable
	while (n * n * n < 11000){
	n = n + 1;	
	}
	cout << n-1 << " is the largest integer n such that n*n*n is less than 11,000\n";
	return 0;
}
