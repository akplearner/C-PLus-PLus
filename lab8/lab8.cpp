#include <iostream>
using namespace std;
int main() {

	int num=1;
	cout<<"1.A-one to hundred"<<endl;
	while(num<=100) {
		cout<<num<<endl;
		num=num+1;
	}
	num=1;
	
	cout<<endl<<"1.B"<<endl;
	int line=0;
	while(num<=100) {
		cout<<num<<" ";
		num=num+1;
		line=line+1;
		if(line%10==0){
			cout<<endl;
		}
	}
	
	cout<<endl<<"1.C"<<endl;
	num=2;
	line=0;
    while(num<=100) {
    	cout<<num<<" ";
        num=num+2;
    	line=line+1;
		if(line%10==0){										
			cout<<endl;
		}
	}

	cout<<"PART 2-miles to kilometers"<<endl;
	num=0;
	do{
		cout<<"Enter an integer that is greater than 0 and less than 20: "<<endl;
		cin>>num;
	}while(num<=0 || num>=20);
	for(int i=1;i<=num;i++){
		cout<<"Miles\tKilometers "<<endl;
	cout<<i<<"\t"<<i*1.609<<endl;
	}


	cout<<"Part 3-prime number"<<endl;
	if(num%2==0 ){
		cout<<"number is not prime: ";
	}
	cout<<"Number is prime"<<endl;
	
	cout<<endl;
    return 0;
}

