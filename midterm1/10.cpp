#include <iostream>
using namespace std;
int main(){
	int lines=0;
	for(int n=28;n<=387;n++){
		cout<<n<<" ";
		lines ++;
		if(lines==10){cout<<endl;lines=0;}
	}
	return 0;
}
