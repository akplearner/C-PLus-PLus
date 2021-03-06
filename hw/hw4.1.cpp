#include <iostream>
using namespace std;

// Returns the area of a circle with the given radius
double areaOfCircle(int r) {
	double a=3.1415*r*r; 	// Fill in.
	return a;
}

// Returns the largest digit of the given integer
int largestDigit(int x) {
	int largest=0;	// Fill in.
	while(x>0){
		if(x%10> largest){
			largest=x%10;
		}
		x/=10;
	}
	return largest;
}


// Returns true if the 3 parameters can be the sides of a triangle
bool validTriangle(int x, int y, int z) {
	return x+y>z && x+z>y && y+z>x;// Fill in.
}

int main () {
   cout << areaOfCircle(2) << endl;
   cout << largestDigit(375) << endl;
   cout << largestDigit(8375) << endl;
   if (validTriangle(2, 3, 4))
      cout << "valid" << endl;
   else
      cout << "invalid" << endl;
   if (validTriangle(2, 6, 3))
      cout << "valid" << endl;
   else
      cout << "invalid" << endl;
   
   return 0;
}
