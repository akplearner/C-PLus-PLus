#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter odd integer: ";
	cin>>n;
	if(n%2==0 || n<0){return 0;}
	int mid=n/2;
	for(int r=0;r<n;r++){
	  for(int p=1;p<=4;p++){
		for(int c=0;c<=mid;c++){
			if((c+r)<mid || r-c>=mid+1){cout<<" ";}
			else{cout<<"*";}
		}
	  }
		cout<<endl;
	}
	return 0;
}
