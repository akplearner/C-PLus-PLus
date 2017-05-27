#include <iostream>
using namespace std;

int main(){
	string s="Hello";
	//a) for loop that prints reverse.
	for(int i=(s.length()-1);i>=0;i--){
		cout<<s[i];
	}
	cout<<endl;
	//b
	cout<<"length: "<<s.size()<<endl;
	return 0;
}
