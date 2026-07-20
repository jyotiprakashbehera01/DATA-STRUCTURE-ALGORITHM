#include <iostream>
using namespace std;

// calculate sum of two number ?
int sumofTwoN(int a, int b)
{
  int s = a + b;
  return s;
}
// check minimum of two no ?
int minoftwo(int a, int b)
{
  if (a < b)
  {
    return a;
  }
  else
  {
    return b;
  }
}

int main()
{
  cout << sumofTwoN(5, 6) << endl;
  cout << minoftwo(4, 6) << endl;
  return 0;
}