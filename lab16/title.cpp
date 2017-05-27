#include <iostream>
using namespace std;

string read(){}
double magic(double a)
bool isOk(double c)
void print(double b)
int check(double c){}//output not double because its being compared to integer
int firstDigit(int a){}

int main(){
	int a = 100;
	string b=read();
	double c=magic(a+2.5);
	if(isOk(c))
		print(b);
	if(check(c)==a)cout<<"close" ;
	cout<<firstDigit(a)<<endl;
	return 0;

}
