#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter an odd positive integer: ";
	cin>>n;
	if(n<0 || n%2==0){return 0;}
	int mid=(n+1)/2;
	for(int r=1;r<=mid;r++){
		for(int c=1;c<=n;c++){
			if(r+c<=mid || c-r>=mid){
				cout<<" ";
			}else {cout<<"*";}
		}
		cout<<endl;
	}
	return 0;
}
