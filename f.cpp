#include <iostream>
using namespace std;
void treat();
int day;
int dt, dut;
int patient;
main()
{
    cout << "Enter number of days: ";
    cin >> day;
    int tt = 0, tut = 0;
    int dr = 7;
    for (int x = 1; x <= day; x++)
    {
        if(tt < tut && x % 3 == 0){
        dr = dr + 1;
      }
        
        cout << "Enter number of patients of day" << x << " :";
        cin >> patient;
        if (patient >= dr)
        {
            dut = patient - dr;
            dt = patient - dut;
             tt = tt + dt;
             tut = tut + dut;
        
        }

        if (patient < dr)
        {
            dut = 0;
            dt = patient;
        
        tt = tt + dt;
        tut = tut + dut;
        }
        

      
    }
        cout << "Treated: " << tt << endl;
        cout << "Untreated: " << tut << endl;
}
