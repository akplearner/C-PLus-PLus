#include<iostream>
using namespace std;

int main(){
cout<<"**part 1**"<<endl;
	cout<<"1/2= "<<1/2<<endl;
	cout<<"1.0/2= "<<1.0/2<<endl;
	cout<<"1/(double)2= "<<1/(double)2<<endl<<endl;

cout<<"**part 2**"<<endl;
	string name;
	double f,ct;
	
	cout<<"What is your name? "<<endl;
	cin>>name;
	cout<<"What is today's temperature in Fahrenheit? ";
		cin>>f;
	ct = 5/9.0*(f-32);
	cout<<endl<<endl;
	cout<<"Hello, "<<name<<endl;
	cout<<"Today's temperature is "<< ct <<" Celsius"<<endl;

cout<<"**part 3**"<<endl;
	int a,b,c,d; //a=numer1,c=numer2,b=denom1,d=denom2
	char dummychar;
	cout<<"Enter first fraction: ";
	cin>>a>>dummychar>>c;

	cout<<"Enter second fraction: ";
	cin>>b>>dummychar>>d;

	//sum=(a*d+b*c)/(double)b*d;//not needed cause we need it to show in different way.
	
	cout<<"Sum:\n\n";//same as endl<<endl
	cout<<a*d+b*c<<endl;
	cout<<"---"<<endl;
	cout<<b*d<<endl;
	return 0;
}
