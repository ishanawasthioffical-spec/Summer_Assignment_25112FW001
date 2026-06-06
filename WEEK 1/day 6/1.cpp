#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;

    cout << "Enter a decimal number: ";
    cin >> num;

    // Special case for 0
    if (num == 0) {
        cout << "Binary = 0";
        return 0;
    }

    string binary = "";

    // Keep dividing by 2 and store remainder
    while (num > 0) {
        binary = char((num % 2) + '0') + binary;
        num /= 2;
    }

    cout << "Binary = " << binary;

    return 0;
}