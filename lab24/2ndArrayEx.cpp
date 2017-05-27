#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void fill(int a[][]){
	srand(time(0));
	for(int i=0;i<10;++i){
		for(int j=0;j<10;++j){
			a[i][j]=rand()%900+100;
		}
	}
}

int main(){
	srand(time(0));
	int array[10][10];
	fill(array);
	return 0;
}
