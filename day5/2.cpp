#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, temp, sum = 0;
    cin >> n;

    temp = n;

    while(temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if(sum == n)
        cout << "Strong Number";
    else
        cout << "Not a Strong Number";

    return 0;
}