#include <iostream>
using namespace std;
int main(){
	int r,c,h,space;
	h=9;
	space=h;
	for(r=1;r<=h;r++){
		for(c=9;c>=1;c--){
			cout<<" ";
		}
		for(c=1;c<=h;c++){
			cout<<"*";
		}
		
		cout<<endl;
	}
}
