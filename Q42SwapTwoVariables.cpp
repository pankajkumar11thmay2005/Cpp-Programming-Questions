#include <iostream>
#include <utility> // For std::swap
using namespace std;

int main() {
  int a, b; 
  cin >> a >> b;

  cout << a << " " << b << endl; // Output the original values

  swap(a, b); // Swap the values of a and b

  cout << a << " " << b << endl; // Output the swapped values

  return 0;
}