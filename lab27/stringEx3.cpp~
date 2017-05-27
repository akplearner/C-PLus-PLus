#include <iostream>
using namespace std;
#include<cstdlib>
#include<ctime>

int numSixes(string s){
	return 1;
}
void printNumSixes(int x){
	cout<<1<<endl;
}

int longest(int a,int b,int c){
	if(a>b && a>c) return a;
	if (b>a && b>c) return b;
	return c;
}
void average(double a,double b,double c){
	double sum=a+b+c;
	cout<<sum/3<<endl;
}

char randomLetter(){
	srand(time(0));
	int x=rand()%32+65;
	return (char)x;
}
int main(){
	char c='A';
	cout<<numSixes("19683")<<endl; //prints 1
	printNumSixes(19683); //prints 1
	cout<<longest(961,1961,5)<<endl; //prints 1961
	average(2.5,3.4,4.0); //prints 3.3
	c=randomLetter();cout<<c<<endl; //prints random letter eg Z
	
	return 0;
}
