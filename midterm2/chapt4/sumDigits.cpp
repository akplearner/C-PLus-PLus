#include<iostream>
using namespace std;

int sumDigits(int n){
	if( n<10) return n;
	return sumDigits(n/10)+(n%10);

}
int main(){
	int n;
    cout << "Enter a number greater than 0: ";
    cin >> n;
	cout << "The digit sum is " << sumDigits(n)<<endl;
	return 0;
}
