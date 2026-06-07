#include <iostream>
using namespace std;

// Recursive function to reverse the number
void reverseNumber(int n)
{
    // Base case
    if (n == 0)
        return;

    // Print last digit
    cout << n % 10;

    // Recursive call
    reverseNumber(n / 10);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Reversed number = ";
    reverseNumber(n);

    return 0;
}