#include <iostream>
using namespace std;

// Recursive function to calculate sum of digits
int sumOfDigits(int n)
{
    // Base case
    if (n == 0)
        return 0;

    // Last digit + remaining digits
    return (n % 10) + sumOfDigits(n / 10);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of digits = " << sumOfDigits(n);

    return 0;
}