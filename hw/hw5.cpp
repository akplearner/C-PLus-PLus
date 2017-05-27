//Pena,Anthony
//csc111 11A Homework 5

#include <iostream>
using namespace std;
int countFive(int a){
	if(a==5) return 1;
	if(a<10 && a!=5) return 0;

	if(a%10!=5)return countFive(a/10); 
	return countFive(a/10)+1;
}

void printStarDigit(int a){
	if(a<10 && a>0)cout<<"*"<<a<<"*";	
	if(a>=10){
		printStarDigit(a/10);
   		cout << a % 10<<"*";
	}
}

int sum(int a[],int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum+=a[i];
	}
	return sum;
}

bool arraysEqual(int a[],int b[],int size){
	int test;
	for (int i=0;i<size;i++){
		if(a[i]==b[i]) test=1;
		else test=0;
	}
	if(test==0)rieturn false;
	else return true;
}

int main(){    
	cout << "Part A:\n";
    int input1 = 505155, input2 = 5, input3 = 717171; 
    //should output: 4
    cout << "counting digit 5: " << countFive(input1) << endl;
    printStarDigit(input1);
	 //should output: *5*0*5*1*5*5*
    cout << endl; 
    //should output: 1
    cout << "counting digit 5: " << countFive(input2) << endl;
    printStarDigit(input2);
	//should output: *5*
    cout << endl; 
    //should output: 0
    cout << "counting digit 5: " << countFive(input3) << endl;
    printStarDigit(input3); 
	//should output: *7*1*7*1*7*1*
    cout << endl; 
    
	cout << "Part B:\n";
    int a[4] = {3, 5, 5, 2};
    int b[4] = {3, 5, 5, 2};
    int c[5] = {3, 3, 3, 3, 3};
    int d[5] = {3, 3, 3, 3, 4};
    cout << "The elements of array a add up to " << sum(a, 4) << endl;
    if (arraysEqual(a, b, 4))
       cout << "Arrays a and b are equal" << endl;
    else      
		cout << "Arrays a and b are not equal" << endl;
    if (arraysEqual(c, d, 5))
       cout << "Arrays c and d are equal" << endl;
    else       cout << "Arrays c and d are not equal" << endl;
     
	return 0;
 } 

