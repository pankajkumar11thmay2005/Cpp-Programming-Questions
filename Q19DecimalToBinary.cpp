#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    string binary;

    while (n > 0) {
        binary += char('0' + n % 2);
        n /= 2;
    }

    reverse(binary.begin(), binary.end());

    cout << binary;

    return 0;
}