#include <iostream>
using namespace std;
	
void print(int array[],int size){
	for(int i=0;i<size;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
}

void add5(int array[],int size){
	for(int i=0;i<size;i++)
		array[i]+=5;
}
int main(){
	int grades[30];

	for(int i=0;i<30;i++){
		cout<<"Enter Grade #"<<i+1<<": ";
		cin>>grades[i];
	}
	for(int j=0;j<30;j++){
	cout<<grades[j]<<" "<<endl;
	}

	double avg=0;
	for (int i=0; i<30; ++i)
		avg+=grades[i];
	
	cout<<"Class average"<<avg/30<<endl;
	
	int a[4]={1,4,0,8};
	cout<<"Now";
	print(a,4);

	add5(a,4);

	cout<<"Later: ";
	print(a,4);

	return 0;
}
