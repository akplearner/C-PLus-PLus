#include <iostream>
using namespace std;
bool check(int a,int b){
    if(a==0 && b==0)return true;
	else if(a==0 && b!=0) return false;
	else if(a!=0 && b==0)return false;
    check(a/10,b/10);
}

int f(int a, int b){
		if(a<0 || b<0) return 0;
		if(!(check(a,b))) return 0;
		if(a>b)return a;
		return b;
}

// a or b cant be negative, and a and b needs to have same amount of digits.
int main(){
	int x,y;
	cout<<"enter: ";
	cin>>x;
	cin>>y;
	cout<<"result is : "<<f(111,999)<<endl; //should return:  999
	cout<<"result is : "<<f(111,9999)<<endl; //should return: 
	cout<<"result is : "<<f(x,y)<<endl;
	
	return 0;
}

