#include <iostream>
using namespace std;
int main(){
	int n,mid;
	cout<<"enter num: ";
	cin>>n;
	mid=n/2;
	for(int r=0;r<=mid;r++){
		for(int c=0;c<n;c++){
			if(r+c<mid || (c-r)>mid){
				cout<<" ";
			}else {cout<<"*";}
		}
		cout<<endl;
	}
	return 0;
}
