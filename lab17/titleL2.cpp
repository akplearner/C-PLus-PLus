#include <iostream>
using namespace std;

int fun(int &x, int &y){
	cout<<"--"<<x<<y<<endl;
	if(y<=0) return x;
	cout<<"--"<<x<<y<<endl;
	x=x+2;
	cout<<"--"<<x<<y<<endl;
	cout<<x<<y<<endl;
	cout<<"--"<<x<<y<<endl;
	return x*y;
}
int main(){
	int x=4,y=0;
	cout<<fun(x,y)<<endl; //a:4 
	fun(y,x);	//b:24
	fun(x,y); //c:62
	fun(y,x); //d:46
	cout<<fun(x,y)<<endl; //e: 84 --32
	return 0;
}
