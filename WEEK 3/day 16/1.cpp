#include <iostream>
using namespace std;

int findMissing(int arr[], int n) {
    int totalSum = (n + 1) * (n + 2) / 2;
    int arraySum = 0;

    for (int i = 0; i < n; i++)
        arraySum += arr[i];

    return totalSum - arraySum;
}

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Missing Number: " << findMissing(arr, n);
    return 0;
}