#include <iostream>
using namespace std;
int main()
{
  int A, B;
  cin >> A >> B;
  if (B % A == 0)
  {
    cout << "Multiples";
  }
  else if (A % B == 0)
  {
    cout << "Multiples";
  }
  else
  {
    cout << "No Multiples";
  }
  return 0;
}