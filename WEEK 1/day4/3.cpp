#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, digit;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while(num > 0) {
        digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }

    if(sum == original)
        cout << original << " is an Armstrong Number";
    else
        cout << original << " is not an Armstrong Number";

    return 0;
}