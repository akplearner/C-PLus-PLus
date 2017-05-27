#include <iostream>
using namespace std;

int main(){
	cout<<"PART 1"<<endl;
	int h;
	cout<<"Enter height: ";
	cin>>h;
	for(int r=1; r<=h;r++){
		for(int c=1;c<=r;c++){
			cout<<"*";	
		}
		cout<<endl;
	}

	cout<<"PART 2"<<endl;
	int max,spaces;
	cout<<"Enter height: ";
	cin>>max;
	spaces=max;
	for(int r=1;r<=max;r++){
		spaces=spaces-1;
		for(int c=1;c<=spaces;c++){
			cout<<" ";
		}for(int c=1;c<=2*r-1;c++){
			cout<<"*";
		}
		cout<<endl;
		
	}
	cout<<endl;
	return 0;
}
