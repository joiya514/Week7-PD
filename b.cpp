#include <iostream>
using namespace std;
int rows;
void print();
main(){
cout << "Enter number of rows: ";
cin >> rows;
print();

}
void print(){
for(int x = 1; x <= rows; x++){
for(int y = rows; y >= x; y--){
 cout << "*";

}

cout << endl;
} 

}