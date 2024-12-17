#include <iostream>
using namespace std;

int main()
{
  int A, B, C;
  cin >> A >> B >> C;

  int max_number = max(max(A, B), C);
  int min_number = min(min(A, B), C);

  cout << min_number << " " << max_number;
  return 0;
}