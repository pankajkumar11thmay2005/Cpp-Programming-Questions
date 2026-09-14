#include <iostream>
using namespace std;

void change(int x) {
  x = 50; // Modify the value of x inside the function  
}

int main() {
  int a = 200;

  change(a); // Pass the value of a to the function change  

  cout << a;

  return 0;
}