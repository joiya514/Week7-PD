#include <iostream>
using namespace std;
int number;
void sequence();
main(){
cout <<"Enter number: ";
cin >> number;

sequence();
}
void sequence(){
int x = 0;
int y;
for(y = number; y >= 1; y--){
x = x + y;
}
cout << x;

}