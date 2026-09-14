#include <iostream>
using namespace std;

int main() {
    char ch = '7';

    if (ch >= '0' && ch <= '9')
        cout << "Digit";
    else
        cout << "Not Digit";

    return 0;
}