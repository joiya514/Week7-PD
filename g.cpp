#include <iostream>
using namespace std;
int no;
int number;
main(){
    float c2 = 0, c3 = 0, c4 = 0;
cout << "Enter number of numbers: ";
cin >> no;
for(int x = 1; x <= no; x++){
  cout << "Enter number" << x << ": ";
  cin >> number;
  if(number % 2 == 0){
  c2 = c2 + 1;
  }
  if(number % 3 == 0){
  c3 = c3 + 1;
  }
  if(number % 4 == 0){
  c4 = c4 + 1;

  }
}
cout << (c2 * 100) / no << endl;
cout << (c3 * 100) / no << endl;
cout << c4 * 100 / no << endl;

}