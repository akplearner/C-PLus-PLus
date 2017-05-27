#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter: ";
	cin>>n;
	for(int r=0;r<n;r++){
		for(int c=0;c<=n/2;c++){
			if(c==r || c+r==n-1){
				cout<<"*";
			}else {cout<<" ";}
		}
		cout<<endl;
	}
	return 0;
}
