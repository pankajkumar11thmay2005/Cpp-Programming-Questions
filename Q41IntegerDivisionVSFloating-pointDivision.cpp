#include <iostream>
using namespace std;

int main() {
  int a = 7, b = 2;

  cout << a / b << endl; // Integer division

  cout << static_cast<double>(a) / b << endl; // Floating-point division

  return 0;
}