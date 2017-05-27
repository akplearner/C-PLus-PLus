#include <iostream>
using namespace std;

int count(int x){
	if(x<10){return 1;}
	return count(x/10)+1;
}
int main(){
	int n;
	cout<<"Type number that you want to know number of digits about: "<<endl;
	cin>>n;
	cout<<"The numbers of digits in this number is: "<<count(n)<<endl;
	return 0;
}
