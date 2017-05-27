#include <iostream>
using namespace std;
int main(){
	int n;
	cout <<"give me number";
	cin >>n;
	for(int p=1;p<=3;p++){
		for(int r=1;r<=n;r++){
			for(int c=1;c<=2*n-1;c++){
				if(c+r<=n || c-r>n-1){
					cout<<" ";
				}else {cout<<"*";}
			}
			cout<<endl;
		}
	}
	return 0;
}
