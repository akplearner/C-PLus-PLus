#include <iostream>
using namespace std;

int main() {
	int change,hundred,fifty,twenty,ten,five,dollar;
	cout<<"Amount of change in bills: \n";
	cin>>change;
	
	hundred=change/100;
		change=change%100;
	twenty=change/20;
		change=change%20;
	ten=change/10;
		change=change%10;
	five=change/5;
		change=change%5;
	dollar=change/1;
 	
	if(change<=0){
		cout<<"Invalid amount!"<<endl;
	}else{
		cout<<"You need\n"
			<<hundred<<"hundred\n"
			<<twenty<<"twentys\n"
			<<ten<<"tens\n"
			<<five<<"fives\n"
			<<dollar<<"dollars"<<endl;
	}
	return 0;	
}
