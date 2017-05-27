#include <iostream>
using namespace std;

void multiPrint(int n,char c){
	for(int i=1;i<=n;i++){
	cout<<c;
	}	
}


int main(){
 for(int c=6;c>=1;c--){
 	multiPrint(c,'*');
	cout<<endl;
 }
 return 0;
 
}
