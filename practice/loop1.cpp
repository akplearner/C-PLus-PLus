#include <iostream>
using namespace std;

int main(){
	int number;
	cout<<"Enter a positive number: ";
	cin>>number;

	while(number<=0){
		cout<<"Try again:";
		cin>>number;
	}
}
