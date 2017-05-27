#include <iostream>
using namespace std;

int main(int argc,char*argv[]){

	cout<<"1.table of squares"<<endl;
	for(int n=1;n<100;n++){
		if(n>5) break;
		cout<<n<<" "<<n*n<<endl;
	}
	
	 cout<<"2.table of squares"<<endl;
    for(int n=1;n<100;n++){
        if(n>5) continue;
        cout<<n<<" "<<n*n<<endl;
    }

	cout<<"number of arguments:"<<argc<<endl;
	for(int i=0;i<argc;++i){
		cout<<argv[i]<<endl;
	}

	return 0;
}
