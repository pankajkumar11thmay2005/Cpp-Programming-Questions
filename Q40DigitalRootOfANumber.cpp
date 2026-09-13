#include <iostream>
using namespace std;

int main() {
  long long n;
  cin >> n;

  if (n == 0) {
    cout << 0;
  } else {
    cout << 1 + (n - 1) % 9;
  }

  return 0;

}