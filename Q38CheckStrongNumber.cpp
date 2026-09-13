#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;

    for (int i = 2; i <= n; i++)
        result *= i;

    return result;
}

int main() {
    int n;
    cin >> n;

    int original = n;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }

    if (sum == original)
        cout << "Strong Number";
    else
        cout << "Not Strong Number";

    return 0;
}