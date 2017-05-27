#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void randAdd(int x[],int cap){
	srand(time(0));
	for(int i=0;i<cap;i++)
		x[i]+=rand()%(10-1)+1;
}
int main(){
	int x[5]={3,1,4,1,5};
	randAdd(x,5);
	for(int i=0;i<5;i++)
		cout<<x[i]<<" ";
	cout<<endl;
	return 0;
}
