#include <iostream>
using namespace std;

int main() {
  int x = 5;

  cout << ++x << endl; // Pre-increment: Increment the value of x,

  x = 5; // Reset x to 5

  cout << x++ << endl; // Post-increment: Output the value of x, then increment

  cout << x << endl; // Output the incremented value of x 

  return 0;
}