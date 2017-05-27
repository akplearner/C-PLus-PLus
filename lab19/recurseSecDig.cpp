#include <iostream>
using namespace std;

void A(string anthony){
	if(anthony =="anthony"){
	cout<<endl;
	cout<<"    *    "<<endl;
	cout<<"   * *   "<<endl;
	cout<<"  *****  "<<endl;
	cout<<" *     * "<<endl;
	cout<<"*       *"<<endl;
	}else cout<<"invalid"<<endl;
}
int secondDigit(int n){
	if(n<10){cout<<"invalid input";}
	if(n<100){return n%10;}
	return secondDigit(n/10);
}
int main(){
	int n;
	cout<<"___________________\n";
	cout<<"enter number to call  out second digit: ";
	cin>>n;
	cout<<"Second Digit is "<<secondDigit(n)<<endl;
	cout<<"___________________\n";
	
	cout<<"Enter charater A: ";
	string a;
	cin>>a;
	A(a);
	return 0;
}
