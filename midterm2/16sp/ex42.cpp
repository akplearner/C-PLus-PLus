#include <iostream>
using namespace std;

int lastEven(int a){
	if(a%2==0)return a%10;
	return lastEven(a/10);
}
int main(){
	cout << lastEven(23) << endl; // prints 1
	cout << lastEven(1214) << endl; // prints 2
	cout << lastEven(777) << endl; // prints 0
	return 0;
}
