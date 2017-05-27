#include <iostream>
using namespace std;
//--------------------------------
//Functions decleared before being used.
double avg(double x,double y){
	    return (x+y)/2;
}

void print_result(double a, double b){
	cout<<"Average is: "<<avg(a,b)<<endl;
}
//--------------------------------

int main() {
	double a=0.0;
	double b=0.0;
	cout<<"Enter first number and press Enter: ";
	cin>>a;
	cout<<"Enter second number and press Enter: ";
	cin>>b;

	print_result(a,b);
	return 0;
}
