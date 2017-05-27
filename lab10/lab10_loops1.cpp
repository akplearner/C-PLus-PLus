#include <iostream>
using namespace std;

int main(){
	int r,c,max;
	cout<<"enter height: ";
	cin>>max;
	for(r=1;r<=max;r++){
		for(c=1;c<=r;c++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
