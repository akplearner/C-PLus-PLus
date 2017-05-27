#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(0));
	for(int lines=1;lines<=50;lines++){
		//srand(time(0));
		cout<<rand()%4 +2<<" ";
	}
	cout<<endl;
	return 0;
}
