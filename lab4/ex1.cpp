#include <iostream>
using namespace std;

int main() { 
	cout<<"REMAINDERS"<<endl<<endl;
	cout<<"-Finding the remaider of 5/2: ";
		cout<< 5/2<<endl;
	cout<<"-Finding the remaider of 5%2: ";
		cout<<5%2<<endl;
	
	cout<<endl;
	
	cout<<"Example 1"<<endl;	
	cout<<"-Find the remainder of the sum of two numbers divided by 2."<<endl;
	cout<<"*Part A*"<<endl;
		cout<<"number1+number2%2 = ";
	   		cout<<1 + 2 % 2<<endl;
	cout<<"*part B*"<<endl;
		cout<<"2 % (number1 + number2) = ";
			cout<<2 % (1 + 2)<<endl;
	cout<<"*part C*"<<endl;
        cout<<" (number1 + number2) % 2 = ";
			cout<<(1 + 2)%2<<endl;	
	
	cout<<endl;
	
	cout<<"Example 2"<<endl;
	cout<<"*Part A*"<<endl;
		cout<<"number3+number2%2 = ";
			cout<<3 + 2 % 2<<endl;
	cout<<"*part B*"<<endl;
		cout<<"2%(number3+number2) = ";
			cout<<2 % (3 + 2)<<endl;
	 cout<<"*part C*"<<endl;
	 	cout<<" (number3+number2)%2 = ";
			cout<<(3 + 2)%2<<endl;

	return 0;
}
