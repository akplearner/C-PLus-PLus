#include <iostream>
using namespace std;

int main(){
	//question1
	int x;
	cout<<"enter positive integer: ";
	cin>>x;

	if (x<=0){
		cout<<"Illegal"<<endl;
		return 0;
	}
	for(int i=1;i<=x%20;i++){
		cout<<x<<i<<".";
		cout<<x/10<<endl;
	}

	//question2
	int n=0,count=0;
	cout<<"enter an integer n between 980 and 960: ";
	cin>>n;
	if(n>=980 || n<=960){
		cout<<"Illegal"<<endl;
		return 0;
	}
	do{
		if((count++%6)==0){
			cout<<endl;
		}
		cout<<n<<":";
		n--;

	
	}while(n>=666);
	cout<<endl;
	return 0;
}
