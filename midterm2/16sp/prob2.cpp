#include<iostream>
using namespace std;

int f(int x){
	if(x<10) return x*11;
	return 100*f(x/10)+f(x%10);
}
int main(){
	cout<<f(8)<<endl;
	cout<<f(81)<<endl;
	cout<<f(243)<<endl;
	return 0;
}
