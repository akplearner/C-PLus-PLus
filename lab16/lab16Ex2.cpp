#include <iostream>
using namespace std;

void fun1(int n){
	for(int r=0;r<n;r++){
		for(int c=0;c<n;c++){
			if(c<r){cout<<"O";}
			else{cout<<"X";}
		}
		cout<<endl;
	}
}

int main(){
	cout<<"Part 1"<<endl;
	int n;
	cout<<"Enter positive integer less then 10: ";
	cin>>n;
	while(n>10 || n<1){
			cout<<"Wrong! Try again: ";
			cin>>n;
		}
	cout<<n<<" Thats correct";
	cout<<endl;

	cout<<"Part 2"<<endl;
	fun1(4);
	
	return 0;
}
