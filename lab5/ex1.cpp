#include <iostream>
using namespace std;

int main(){

	int number;
	cout<<"enter a number: ";
	cin>>number;

	if(number%3==0){
		cout<<number<<" is divisible by 3."<<endl;
	}else if(number%3==1){
		cout<<number<<" has remainder of 1"<<endl;	
	}else{
		cout<<number<<" has remaider of 2"<<endl;
	}
	return 0;
}
