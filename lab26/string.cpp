#include <iostream>
using namespace std;

int main(){
 	//the string datatype is an example of a class(an advanced data type.
 	string s1; //empty string upon declaration
 	s1+="CS"; //concatenation example
 	s1=s1+"11"; //another example

 	cout<<s1<<endl; //prints cs11

	//you can use array-like [] notation
	//to grab a character in a string!
	cout<<s1[0]<<endl; //c
	cout<<s1[3]<<endl; //1

	//appending a character!
	s1+=s1[3]; //"CS11" + "1"
	cout<<s1<<endl; //print cs111
	
	//changing a character!
	s1[2]='2';
	cout<<s1<<endl; //CS211
	
	//call a funtion from a class object as follows: 
	//variable_name.function_name(...arguments...);
	
	//print size of string
	cout<<"size: "<<s1.size()<<endl; //5
	
	//loop through string!
	for(int i=0;i<s1.size()-1;i++){
		cout<<s1[i];
		cout<<endl;
	}
	return 0;
}
