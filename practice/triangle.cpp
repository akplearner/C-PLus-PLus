#include <iostream>
using namespace std;
int main(){
	int max=5,space,rows;
	space=max;
	rows=max+max-1;
	for(int r=1;r<=max+max-1;r++){
		if(r<=max) space--;
		else space++;
			for(int c=1;c<=space;c++){
			cout<<" ";
			}
			if(int c<=space){
			for( c=1;c<=2*r-1;c++)
			cout<<"*";
			}
			cout<<endl;
	}
	return 0;
	
}
