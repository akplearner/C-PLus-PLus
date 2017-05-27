#include <iostream>
using namespace std;

int main(){
	string words[4]={"How","are","you?",""};
	for(int i=1;i<=2;i++){
		cout<<words[i]; //line a: areyou?
	cout<<endl;
	for(int i=0;i<=2;i++)cout<<words[i][i]; //line b:Hru
	cout<<endl;
	return 0;
	}
}
