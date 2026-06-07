#include <iostream>
using namespace std;

// Recursive function to find Fibonacci number
int fibonacci(int n)
{
    // Base cases
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    // Recursive calls
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci number = " << fibonacci(n);

    return 0;
}