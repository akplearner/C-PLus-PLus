//Pena,Anthony
//csc111 11A homework1

#include <iostream>
using namespace std;

int main(){

	string name;
	
	cout<<"Part A:"<<endl;
	cout<<"Whats your name? ";
	cin>>name;
	cout<<"********************************************"<<endl;
	cout<<"Hello "<<name<<"!"<<endl;
	cout<<"This is CS111!"<<endl;
	cout<<"It's great to see you!"<<endl;
	cout<<"********************************************"<<endl;
	
	cout<<"Part B:"<<endl;
	double h;  //height
	double b1; //base1
	double b2; //base2
	cout<<"What is the height of the trapezoid? ";
	cin>>h;
	cout<<"What is the base 1 of the trapezoid? ";
	cin>>b1;
	cout<<"What is the base 2 of the trapezoid? ";
	cin>>b2;

	cout<<"The area of the trapezoid is: "<<1/2.0*h*(b1+b2)<<endl;
	return 0;	
}
