#include <iostream>
using namespace std;
//Q5. Write a function called cube here
int cube(int& a){
  return a=a*a*a;
}
int main () {
	int x = 0;
	cout << "Please enter an integer and I will find you its cube:\n";
	cin >> x; //If user enters 2 here
	cube(x);
	cout << x << endl; //Program will print 8 on screen
	return 0;
}
