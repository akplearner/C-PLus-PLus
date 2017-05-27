#include <iostream>
#include<cmath> //To use cmath functions, you need this line.
using namespace std;

int two(){return 2;}
void b(){
	cout<<"bbb"<<endl; //Printed 2nd
	cout<<"c"<<endl;
	return; //No value is returned. return just exist from the function.
	cout<<"ccc"<<endl; //Not printed.This statement is never reached.

}

void f(int x){x=0; /*desnt modify x in main*/};
bool isEven(int x){
	return x%2==0; //return be even of which ever num
}
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

int main(){
	cout<<"---LIBRARY FUNCTIONS: ---"<<endl;
	cout<<sqrt(2)<<endl; //square root of 2
	cout<<abs(-3)<<endl; //absolute value of -3
	
	cout<<"---FUNCTIONS THAT RETURN VALUES: ---"<<endl;
	int x=two()+3;
	cout<<"x is: "<<x<<endl;

	cout<<"---VOID FUNCTIONS: ---"<<endl;
	cout<<"aaa"<<endl; //printed 1st
	b(); //function call
	cout<<"ddd"<<endl; //printed 3rd
	
	cout<<"---PASSING PARAMETERS: ---"<<endl;
	 x=5;
	f(x);
	cout<<"x is: "<<x<<endl;
	cout<<sqrt(abs(-2))<<endl;
	if (isEven(x+2)){cout<<"x+2 is even";}
	else{cout<<"x+2 is odd";}

	cout<<"---PASS BY REFERENCE: ---";
	x=3;
	int y=5;
	cout<<endl<<"before:"<<"x:"<<x<<" "<<"y:"<<y;
	cout<<endl;
	swap(x,y);
	cout<<"after: "<<"x:"<<x<<" "<<"y:"<<y;

	cout<<endl;
	return 0;
}
