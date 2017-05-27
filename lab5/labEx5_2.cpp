#include <iostream>
using namespace std;

int main(){
	//part 1
	int i1;
	cout<<"Enter an integer number: ";
	cin>>i1;
	cout<<"you number is: "<< i1<<endl;
	if((i1%4)==0){
		cout<<"The number "<<i1<<" is multiple of 4"<<endl;
	}else{
		cout<<"The number "<<i1<<" is not a multiple of 4"<<endl;
	}
	
	//part 2
	double d1,d2;
	cout<<"Enter a double variable number: ";
	cin>>d1;
	cout<<"Enter a double variable number: ";
	cin>>d2;
	if (d1>d2){
		cout<<d1<<" number is greater then "<<d2<<endl;
	}else if(d1<d2) {
		cout<<d1<<" number is smaller then "<<d2<<endl;
	}
	else{
		cout<<"These two numbers are equal."<<endl;
		}

	//part 3
	int n1;
	cout<<"Enter an integer: ";
	cin>>n1;
	if((n1%2)==0){
		cout<<"Number is even, therefore its divided by 2 giving us: "<<n1/2<<endl;
	}else {
		cout<<"Number is not even,therefore its mutiplied by 3 and add 1:  "<<(n1*3)+1<<endl;
	}
	return 0;
}
