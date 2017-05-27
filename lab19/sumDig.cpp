#include <iostream>
using namespace std;

int sumDig(int n){
	if(n<10){return n;}
	return sumDig(n/10)+sumDig(n%10);
}
int main(){	
	int n;
	cout<<"give string of numers to add: ";
	cin>>n;
	cout<<"The sum of digits giver is:"<<sumDig(n)<<endl;
	return 0;
}
