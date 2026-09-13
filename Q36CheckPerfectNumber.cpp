#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  if (n <= 1) {
    cout <<"Not Perfect Number";
    return 0;
  }

  int sum = 1; // 1 is always a divisor (except for n = 1)

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      sum += i;

      if (i != n / i) {
        sum += n / i;
      }
    }
  }

    if (sum == n) {
      cout << "Perfect Number";
    } else {
      cout << "Not Perfect Number";
    }

    return 0;

}