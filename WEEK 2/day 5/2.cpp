#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num)
{
    int original = num;
    int sum = 0;

    while (num > 0)
    {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    return original == sum;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}