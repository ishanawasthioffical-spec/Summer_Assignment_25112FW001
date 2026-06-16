#include <iostream>
#include <unordered_map>
using namespace std;

int maxFrequencyElement(int arr[], int n) {
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
        freq[arr[i]]++;

    int maxFreq = 0, element = arr[0];

    for (auto x : freq) {
        if (x.second > maxFreq) {
            maxFreq = x.second;
            element = x.first;
        }
    }

    return element;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Frequency Element: "
         << maxFrequencyElement(arr, n);

    return 0;
}