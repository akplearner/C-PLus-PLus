#include<iostream>
using namespace std;

int numEven(int a){
	if(a<10){
		if(a%2==0) return 1;
		return 0;
	}return numEven(a/10)+numEven(a%10); 
}
int main(){
	cout<<numEven(23)<<endl;
	cout<<numEven(1212)<<endl;
	cout<<numEven(777)<<endl;
	return 0;
}
