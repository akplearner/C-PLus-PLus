#include <iostream>
using namespace std;
int main(){
	/*int row=5,col=5;
	for(int r=1;r<=row;++r){
		for(int c=1;c<=col;++c){
			if(c==((col/2)+1))cout<<"0";
			else cout<"x";
		}
		cout<<endl;
	}
	*/
	int ROWS=5,COLS=5;
	for (int r = 1; r <= ROWS; ++r) {
		   for (int c = 1; c <= COLS; ++c)
			         if (c == (COLS/2 + 1))     // The middle column depends on the rectangle width
						          cout << "O";
		         else
					          cout << "X";
		      cout << endl;
	}
	return 0;
}
