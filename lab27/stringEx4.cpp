#include <iostream>
using namespace std;

int integerPart(double a){
	return a;
}
void swap1(int a,int b){
	b=a;
	cout<<b<<endl;
}
void swap2(int a[],int b,int c){
	a[1]=c;
	cout<<a[1]<<endl;
}
void median(int a,int b,int c){
	cout<<b<<endl;
}
string sqrt(int a,int b,int c){
	return "error"; 
}
int main(){
	int b[5]={9,3,0,4,7};
	int x=17;
	cout<<integerPart(3.14159)<<endl; //prints 3
	swap1(x,b[1]); //swaps b[1] with x.
	swap2(b,1,x); //swaps b[1] with x
	median(x+1,x,x+2);//print 18 the median value
	cout<<sqrt(5,10,12)<<endl; //print "Error" for any input value.	
	return 0;
}
