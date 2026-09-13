#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int count = 0;

  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      if (i * i == n) {
        count++;
      } else {
        count += 2; // Count both i and n/i as divisors
      }
      
    }
  }
  cout << count;

  return 0;
}