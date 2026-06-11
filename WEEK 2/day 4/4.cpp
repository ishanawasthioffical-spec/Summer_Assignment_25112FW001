#include <iostream>
using namespace std;

long long factorial(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

int main()
{
    int X;

    cout << "Enter a number: ";
    cin >> X;

    cout << "Factorial = " << factorial(X);

    return 0;
}