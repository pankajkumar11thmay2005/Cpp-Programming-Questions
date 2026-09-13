#include <iostream> 
using namespace std;

int main() {
  int n;
  cin >> n;

  cout << "Original: " << n << endl;

  int reversed = 0;
  while (n != 0) {
    int digit = n % 10;
    reversed = reversed * 10 + digit;
    n /= 10;
  }

  cout << "Reversed: " << reversed << endl;

  return 0;
}