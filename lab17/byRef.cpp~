#include <iostream>
using namespace std;

void printDigits(int n){
	while(n>0){
		cout<<n%10<<" ";
		n/=10;
	}
}
void printDigitsRef(int& n){
	while(n>0){
		cout<<n%10<<" ";
		n/=10;
	}		
}
int main(){
	int n;
	cout<<"Enter a positive number: ";
	cin>>n;
	if(n<0)return 0;

	cout<<"Digits are: ";
	printDigits(n);
	cout<<endl;
	cout<<"The value of n is now: "<<n<<endl;

	cout<<"Digits are: ";
	printDigitsRef(n);
	cout<<endl;
	cout<<"The value of n is now: "<<n<<endl;
	return 0;
}
