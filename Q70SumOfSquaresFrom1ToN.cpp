#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  long long sum = 0; //n * (n +1) * (2 * n + 1) / 6;

  for (int i = 1; i <= n; i++) {
    sum += i * i;
  }

  cout << sum;

  return 0;
}