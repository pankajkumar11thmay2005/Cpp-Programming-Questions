#include <iostream>
using namespace std;

int main() {
  char ch;
  cin >> ch;

  char upper = ch - 'a' + 'A';

  cout << upper;

  return 0;
}