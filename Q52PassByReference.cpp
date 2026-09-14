#include <iostream>
using namespace std;

void change(int &x) {
  x = 100; // Modify the value of x inside the function 
}

int main() {
  int a = 200;

  change(a); // Pass the reference of a to the function change  

  cout << a;

  return 0;
}