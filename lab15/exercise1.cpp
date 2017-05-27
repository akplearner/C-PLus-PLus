#include <iostream>
using namespace std;
int main(){
	int n=15;
	for(int i=1;i<=n;i=i+1){
		if(i<=10){	
			cout<<i<<" ";
		}else{
			cout<<n;
			return 0;
		}
	}
	cout<<endl;
	return 0;
	
}
