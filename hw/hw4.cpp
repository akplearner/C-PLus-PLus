#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
//a
bool largerThan11(int a){}
//b
int rollDice(){
	srand(time(0));
	for(int i=1;i<=3;i++){
		cout<<rand()%6+1<<" ";
	}
	cout<<endl;
}
//c
void emphasis(){}

int main(){
	cout<<"Part A"<<endl;
	cout<<"1."<<endl;
	cout<<"Roll dice: "<<rollDice()<<endl;
	return 0;
}
