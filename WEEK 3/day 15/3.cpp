#include <iostream>
#include <algorithm>
using namespace std;

void rightRotate(int arr[], int n, int k) {
    k = k % n;

    reverse(arr, arr + n);
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    rightRotate(arr, n, k);

    cout << "Right Rotated Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}