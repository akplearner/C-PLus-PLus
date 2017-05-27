#include <iostream>
using namespace std;
#include<cstdlib>
#include<ctime>

int main(){
	int n;
	cout<<"Give me a number: ";
	cin>>n;

	srand(time(0));
	cout<<rand()%n<<endl;

	return 0;
}
