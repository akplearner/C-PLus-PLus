// Example program
#include <iostream>
#include <string>
using namespace std;

int f(int &a){
    return a=5;    
}
int main()
{
int x[3]={1,2,3};
cout<<f(x[0])<<endl;
cout<<x[0]<<endl;
return 0;
}

