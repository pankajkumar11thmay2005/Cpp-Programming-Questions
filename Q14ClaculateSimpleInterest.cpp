#include <iostream>
using namespace std;

int main() {
  double p, r, t;
  double si, total;
  cin >> p >> r >> t;

  si = (p * r * t) / 100;
  total = p + si;

  cout << "Simple Interest: " << si<< endl << "total: " << total<< endl;

  return 0;


}