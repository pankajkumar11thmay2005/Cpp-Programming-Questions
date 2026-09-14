#include <iostream>
using namespace std;

int main() {
  int arr[] = {10, 20, 30, 40, 50};
  int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the

  cout << size << endl; // Output the size of the array 
  return 0;
}