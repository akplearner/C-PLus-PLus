#include <iostream>
using namespace std;

string rectangle(int n){
	if(n<=1) return "**********\n";
	return rectangle(n-1)+rectangle(1);
}
int main(){
	cout<<rectangle(5)<<endl;
	return 0;
}
