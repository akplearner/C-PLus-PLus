#include <iostream>
using namespace std;

int main(){
	cout<<"Program to convert temperature from Fahrenheit to Celcious"<<endl<<endl;
	
	int c;
	double  f;
	
	cout<<"Enter a temperature in degrees Fahrenheit:";
	cin>>f;
	
	c=(f-32)*5/(double)9; //Formula
	
	cout<<"In Celsius tha is: "<< c << endl; 
	cout<<"The temperature in Celcius is: "<<(f-32)*5/9<<endl;
	return 0;
	
}
