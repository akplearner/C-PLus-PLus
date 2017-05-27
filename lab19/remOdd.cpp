#include <iostream>
using namespace std;

int removeOdd(int x){
	if(x==0){return 0;}
	if(x%2!=0){return removeOdd(x/10);}
	else{
		return removeOdd(x/10)*10+x%10;
	}
}
int main(){
	cout<<"Enter string of integers: ";
	int n;
	cin>>n;
	cout<<"The number without the odds is: "<<removeOdd(n)<<endl;
	return 0;
}
