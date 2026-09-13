#include <iostream>
using namespace std;

int main() {
    long long binary;
    cin >> binary;

    long long decimal = 0;
    long long place = 1;

    while (binary > 0) {
        int digit = binary % 10;

        decimal += digit * place;
        place *= 2;
        binary /= 10;
    }

    cout << decimal;

    return 0;
}