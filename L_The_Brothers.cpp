#include <iostream>
using namespace std;

int main()
{
  string firstName, lastName, firstName2, lastName2;

  cin >> firstName >> lastName >> firstName2 >> lastName2;
  if (lastName == lastName2)
  {
    cout << "ARE Brothers";
  }
  else
  {
    cout << "NOT";
  }
  return 0;
}