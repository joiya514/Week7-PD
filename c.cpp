#include <iostream>
using namespace std;
void print1();
void print2();
int rows;
main()
{
  cout << "Enter number of rows: ";
  cin >> rows;
  print1();
  print2();
}
void print1()
{
  for (int x = 1; x <= rows; x++)
  {
    for (int y = rows; y >= x; y--)
    {
      cout << " ";
    }
    for (int y = 1; y <= x; y++)
    {

      cout << "*";
    }
    cout << endl;
  }
}
void print2()
{
  for (int x = 1; x <= rows; x++)
  {
    for (int y = 1; y <= x; y++)
    {
      cout << " ";
    }
    for (int y = rows; y >= x; y--)
    {
      cout << "*";
    }
    cout << endl;
  }
}
