#include <iostream>
using namespace std;

int secondDigit(int n){
	if(n>=10 && n<100) return n%10;
	return secondDigit(n/10);
}
int main(){
	cout<<secondDigit(7295)<<endl;
	cout<<secondDigit(564654654)<<endl;
	return 0;
}


