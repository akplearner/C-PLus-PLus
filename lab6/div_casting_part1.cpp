#include <iostream>
using namespace std;

int main(){
	int x=5;double y=3; 
	
	//Integer division rounds the result down to the nearest whole number.
	cout<<"1a: "<<x/3<<endl; //a

	//casting converts a variable or literal from one data type to another.
	cout<<"1b: "<<(int)9.73<<endl; //b
	cout<<"1c: "<<(double)22/7<<endl;//c
	
	//What happens when division between two integers happend BEFORE casting?
	cout<<"1d: "<<(double)(22/7)<<endl; //d

	//Any arithmetic operation with a double value will result in a double value.
	cout<<"1e: "<<y/x<<endl; //e

	return 0;
}
