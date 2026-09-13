#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    cin >> n;

    if (n > 0 && (n & (n - 1)) == 0)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}