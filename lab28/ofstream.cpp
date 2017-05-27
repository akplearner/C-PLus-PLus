#include <iostream>
#include <fstream>
using namespace std;
  
int main(){
    ofstream f("outputfile.txt");
    f<<"hello"<<endl;
	f<<'A'<<endl;
	f<<12<<endl;
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			f<<a[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
    return 0;
}
    
