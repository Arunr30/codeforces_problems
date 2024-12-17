#include <iostream>
using namespace std;

int main()
{
  long long int A, B;
  cin >> A >> B;
  int last_digit_1 = A % 10;
  int last_digit_2 = B % 10;
  int sum = last_digit_1 + last_digit_2;
  cout << sum;
  return 0;
}