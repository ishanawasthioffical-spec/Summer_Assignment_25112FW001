#include <iostream>
using namespace std;

int main() {
    long long binary;
    int decimal = 0, base = 1;

    cout << "Enter a binary number: ";
    cin >> binary;

    // Extract digits from right to left
    while (binary > 0) {
        int lastDigit = binary % 10;

        decimal += lastDigit * base;

        base *= 2;
        binary /= 10;
    }

    cout << "Decimal = " << decimal;

    return 0;
}