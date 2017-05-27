#include <iostream>
using namespace std;

int main(){
	int h;
	cout<<"Enter height: ";
	cin>>h;

	for(int r=1;r<h;r++){
		cout<<"*";
		for(int c=1; c<=r;c++){
			cout<<" ";
			cout<<endl;
		}
	}
	cout<<endl;
	return 0;
}
