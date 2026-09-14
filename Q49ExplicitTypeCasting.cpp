#include <iostream>
using namespace std;

int main() {
  int a = 5, b = 2;

  double average = static_cast<double>(a + b) / 2; // Explicit type casting to double 

  cout << average << endl; // Output the average value  

  return 0;
}