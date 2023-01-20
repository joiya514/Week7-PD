#include <iostream>
using namespace std;
int rows;
void star();
main(){


cout << "Enter number of rows: ";
cin >> rows;
star();
}
void star(){
for(int x = 1; x <= rows; x++){
for(int y = 1; y <= x; y++){

cout << "*";
}
cout << endl;
}


}