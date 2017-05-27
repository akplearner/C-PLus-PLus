#include <iostream>
using namespace std;

int firstEven(int x) {
	cout<<x<<endl;
	if (x <= 0) return -1;
	if (firstEven(x/10) >= 0) return firstEven(x/10);
	if (x % 2 == 0) return x % 10;
	return -1;
}

int main() {
cout<<"-----------"<<endl;

	cout <<"ans:" <<firstEven(23) << endl; // prints 2
cout<<"-----------"<<endl;

	cout <<"ans:" << firstEven(1416) << endl; // prints 4
cout<<"-----------"<<endl;
	cout << "ans:" <<firstEven(777) << endl; // prints -1
	return 0;
}
