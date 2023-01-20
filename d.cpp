#include <iostream>
using namespace std;
void sequence();
int number;
main(){
cout << "Enter a number: ";
cin >> number;


for(int x = 1; x <= number; x++){
if(x % 4 == 0){
cout << x * 10 << endl;
}
if(x % 10 != 0){
cout << x << endl;
}

}
}