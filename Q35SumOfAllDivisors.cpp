#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  long long sum = 0;

  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      sum += i;

      if (i != n / i) {
        sum += n / i;
      }
    }
  }
  cout << sum;

  return 0;
}