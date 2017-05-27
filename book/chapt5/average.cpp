#include <iostream>
using namespace std;

//Function must be declared before being used.
double avg(double x, double y){
	return (x+y)/2;
}

int main(){
double a=0.0;
double b=0.0;
cout<<"Enter first number and press Enter: ";
cin>>a;
cout<<"Enter second number and press Enter: ";
cin>>b;

cout<<"Average is: "<<avg(a,b)<<endl;
return 0;
}
