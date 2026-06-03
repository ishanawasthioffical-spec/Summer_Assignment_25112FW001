#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reverse = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num != 0) {
        int digit = num % 10;        
        reverse = reverse * 10 + digit;
        num /= 10;                     
    }

    if (originalNum == reverse)
        cout << originalNum << " is a palindrome number." << endl;
    else
        cout << originalNum << " is not a palindrome number." << endl;

    return 0;
}