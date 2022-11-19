#include <iostream>

using namespace std;

int main() {
  int a = 2, b = 3, c = 4, d = 5, x = 7;
  a += 3;
  b -= 3;
  c *= 3;
  d /= 3;
  x %= 3;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  cout << "d = " << d << endl;
  cout << "x = " << x << endl;
  return 0;
}