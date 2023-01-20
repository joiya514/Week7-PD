#include <iostream>
using namespace std;
int number;
main(){
   cout << "Enter number: ";
   cin >> number;
   for(int x = 1; x <= number; x++){
    for(int y = 1; y <= x; y++){
    cout << "*";
   }
   
   
    for(int y = number; y >= x; y--){
    cout << " ";
   }
   for(int y = number; y >= x; y--){
    cout << " ";
   }
   for(int y = 1; y <= x; y++){
    cout << "*";
   }
   cout << endl;
}
}
