#include <iostream>
using namespace std;

int main()
{
  long long A, B, K;
  cin >> A >> B >> K;

  if (A % K == 0 && B % K == 0)
  {
    cout << "Both";
  }
  else if (A % K == 0 && B % K != 0)
  {
    cout << "Memo";
  }
  else if (B % K == 0 && A % K != 0)
  {
    cout << "Momo";
  }
  else if (A % K != 0 && B % K != 0)
  {
    cout << "No one"
  }
  return 0;
}