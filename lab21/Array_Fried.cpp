#include <iostream>
using namespace std;

void foo1D(int a[],int size){
	for (int i=0;i<size;i++){
		a[i]=0;
	}
	cout<<endl;
}

void foo2D(int q[][8]){
	q[1][2]=0;
	cout<<endl;
}
int main(){

	cout<<"----------1.Array----------"<<endl;
	int a1[3]; //Array size 3(without values)
	int b1[3]={};//Array size 3(with 0 values)
	int c1[3]={5,9,7};//Array size 3(initialize values)
	b1[1]=7;//assign 7 to 2nd element.
	
	for(int i=0;i<3;i++){//print all elements 
		cout<<b1[i]<<" ";
		cout<<endl;
	}
	cout<<"----------2.Multi-dimensional arrays----------"<<endl;
	int a2[3][5]; //2D array with 3rows & 5col.
	a2[1][3]=7;//assign 7 to element 2nd row & 4th col.
	for(int i=0;i<10;i++){
		for(int j=0;j<i;j++){
			a2[i][j]=i;
			cout<<a2[i][j];
		}
		cout<<endl;
	}
	cout<<"----------3.Passing Arrays to functions----------"<<endl;
	int a3[3]={5,7,9};
	foo1D(a3,3)
	int q[8][8]={};
	foo2D(q);
	return 0;
}
