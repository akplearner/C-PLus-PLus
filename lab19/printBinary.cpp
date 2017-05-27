#include <iostream>
using namespace std;

string printBinary(int n){
	if(n==0){return "0";}
	if(n==1){return "1";}
	return printBinary(n/2)+printBinary(n%2);
}
int main(){
	int n;
	cout<<"Enter number to turn into interger: ";
	cin>>n;
	cout<<printBinary(n)<<endl;
	cout<<"1/2 is: "<<1/2<<endl;
	cout<<"2%2 is: "<<1%2<<endl;
	return 0;
}
