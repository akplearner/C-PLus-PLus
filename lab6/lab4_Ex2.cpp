#include <iostream>
using namespace std;

int main(){
	int lenght,width; double perimeter,area;

	cout<<"Enter Lenght: ";
	cin>>lenght;
   	cout<<"Enter width: ";
	cin>>width;
	cout<<"Lenght is: "<<lenght<<" and "<<"width is: "<<width<<endl;
	
	perimeter=lenght*2+width*2;
	area=lenght*width;
	cout<<"The perimeter is: "<<perimeter<<" and "<<"Area: "<<area<<endl;
	return 0;
}

