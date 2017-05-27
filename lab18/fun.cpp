#include <iostream>
using namespace std;

double areaOfCircle(int r){
	double a=r*r*(3.14);
	return a;
}
/* "need to check blackboard for answer"
int largestDigit(int x) {
	  int bigger,last,next;
	
}*/

bool validTriangle(int x,int y,int z){
	if ((x<y+z)&&(y<x+z)&&(z<x+y)){return true}
	else{false}
}
int main(){
	 cout <<areaOfCircle(2) << endl;
	cout <<largestDigit(375)<< endl;

	 return 0;
}
