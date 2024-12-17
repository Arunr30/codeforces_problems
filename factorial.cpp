#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];

  // Input array elements
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  // Nested loops to print pairs
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      cout << "(" << a[i] << ", " << a[j] << ")" << endl;
    }
  }

  return 0;
}
