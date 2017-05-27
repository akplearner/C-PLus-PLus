#include <iostream>
using namespace std;
#include <cstring>


bool isEven(int x){
	return (x%2)==0;
}

string removeEnds(string a){
	return a.substr(1,a.length()-2);
}

char lastChar(char a[]){
	int length=strlen(a);
	return a[length-1];
}
void rotate(int &a,int &b,int &c){
	int temp=a;
	a=b;
	b=c;
	c=temp;
}
int main(){
	int a=2, b=3,c=4;
	string s="HELLO";char t[]="HELLO";

	//(a)test whether a number is even,here Even!
	if (isEven(c)) cout<<"Even!"<<endl;
   	//(b)Removes first and last chars from a string, here ELL
	cout<<removeEnds(s)<<endl;
	//(d)Print last character of a c-string, here O
	cout<<lastChar(t)<<endl;
	//(e)Rotate a,b,c so as to print 3,4,2
	rotate(a,b,c);
	cout<<a<<b<<c<<endl;
	return 0;	
}
