#include<iostream>
using namespace std;

string baseChange(int n,int base){
	if(base>36 || base 2){
		cout<<"Base greater then 36 are not covered by this program."<<endl;
		exit(0);
	}
	string digitCode[36]={
		"0","1","2","3","4","5","6","7","8","9",
		"A","B","C","D","E","F","G","H","I","J",
		"K","L","M","N","O","P","Q","R","S","T",				
		"U","V","W","X","Y","Z"};
   if (n < base) return digitCode[n];
   return baseChange(n / base, base) + baseChange(n % base, base);   
}
 
int main(){
	baseChange(5,156);
	return 0;
}
