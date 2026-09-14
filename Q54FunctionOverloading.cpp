#include <iostream>
using namespace std;


int add(int a, int b) {
  return a + b; // Return the sum of a and b  
}

double add(double a, double b) {
  return a + b;
}

int main() {
  cout << add(10, 20) << endl;
  cout << add(2.6, 4.4) << endl;

  return 0;
}