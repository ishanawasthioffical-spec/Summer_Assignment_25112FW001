#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int a = 0, b = 1, next;

    if(n == 1) {
        cout << a;
    }
    else if(n == 2) {
        cout << b;
    }
    else {
        for(int i = 3; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        cout << n << "th Fibonacci term = " << b;
    }

    return 0;
}