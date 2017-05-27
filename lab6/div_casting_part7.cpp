#include <iostream>
using namespace std;
int main() {
	int n;
	cout<<"Enter a number greater than 0: ";  //<< instead of >>
	cin>>n;//; and >> instead of <<
	if (n <= 0) {
		cout<<"Illegal.\n";     //'' instead of ' and <<
		return 0;
	}
	while (n > 0) {
			 cout<<n % 10<<endl;//removed one ;, and 10 as integer instead of a double.
			  n = n / 10;
			   }
		 return 0;
}
