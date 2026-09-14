#include <iostream>
using namespace std;

int main() {
  int x = 10;

  int &ref = x; // Declare a reference variable ref that refers to x  

  ref = 50; // Modify the value of x through the reference variable ref 

  cout << x << endl;

  return 0;
}