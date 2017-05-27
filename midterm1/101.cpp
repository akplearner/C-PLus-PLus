#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter: ";
	cin>>n;
	for(int r=1;r<=n;r++){
		for(int c=1;c<=n;c++){
			if(c==r || (c+r)==(n+1)){
				cout<<"*";
			}else {cout<<" ";}
		}
		cout<<endl;
	}
	return 0;
}
