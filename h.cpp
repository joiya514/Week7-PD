#include <iostream>
using namespace std;
int no;
int number;
main()
{

    int mb = 0;
    int tk = 0;
    int tn = 0;
    float tons = 0.00;
    float average = 0.00;
    cout << "Enter number of cargos: ";
    cin >> no;

    for (int x = 1; x <= no; x++)
    {

        cout << "Enter weight of cargo" << x << ": ";
        cin >> number;
    
    if (number <= 3)
    {
        mb = mb + number;
    }
    if (number > 3 && number <= 11)
    {
        tk = tk + number;
    }
    if (number > 11)
    {
        tn = tn + number;
    }
    tons = mb + tk + tn;
    
}
float mbb = mb * 100 / tons;
float tkk = tk * 100 / tons;
float tnn = tn  / tons * 100;
average =((mb * 200) + (tk * 175) + (tn * 120)) / tons;
cout << "Total average price per ton of all cargos: " << average << endl;
cout << "Percentage of cargo carried by mini bus: " << mbb << endl;
cout << "Percentage of cargo carried by Truck: " << tkk << endl;
cout << "Percentage of cargo carried by Train: " << tnn << endl;
}