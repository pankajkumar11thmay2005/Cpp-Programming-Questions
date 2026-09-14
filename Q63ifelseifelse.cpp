#include <iostream>
using namespace std;

int main() {
  int marks;
  cin >> marks;

  if (marks >= 90) {
    cout << "A+";
  } else if (marks >= 80) {
    cout << "A";
  } else if (marks >= 70) {
    cout << "B";
  } else {
    cout << "D";
  }

  return 0;
}