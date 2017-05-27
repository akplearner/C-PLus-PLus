#include <iostream>
using namespace std;

int main(){
	int h,tw,te,f,o,change;
	cout<<"How much change in dollars in need?";
	cin>>change;

	if(change>=0){
		h=change/100; change=change%100;
			cout<<"in Hundreds:"<<h<<endl;
		tw=change/20; change=change %20;
			cout<<"in Twenties:"<<tw<<endl;
		te=change/10; change=change%10;
			cout<<"in Tens:"<<te<<endl;
		f=change/5; change=change%5;
			cout<<"in Fives:"<<f<<endl;
		o=change/1;
		cout<<"in one's:"<<o<<endl;
	}else{cout<<"Invalid amount \n";}
	return 0;
}
