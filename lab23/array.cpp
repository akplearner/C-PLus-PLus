#include<iostream>
using namespace std;
int main() {

int table[10][10]; //2D int array with 10 rows and 10 columns

for (int i = 0; i < 10; ++i) {

for (int j = 0; j < 10; ++j) {

table[i][j] = i * j;

} 

} //assigning values to each array entry

for (int i = 0; i < 10; ++i) {

for (int j = 0; j < 10; ++j) {

cout << table[i][j] << “ ”;

} 

cout << endl;

} //printing table

return 0;
}
