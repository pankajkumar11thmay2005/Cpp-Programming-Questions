#include <iostream>
using namespace std;


int maximum(int a, int b) {
  return (a > b) ? a : b; // Return the maximum of a and b using the ternary operator 
}
int main() {
  cout << maximum(10, 20) << endl; // Call the maximum function with arguments 10 and 20 and print the result 

  return 0;
}