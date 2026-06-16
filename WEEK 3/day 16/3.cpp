#include <iostream>
#include <unordered_set>
using namespace std;

void findPair(int arr[], int n, int target) {
    unordered_set<int> s;

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];

        if (s.find(complement) != s.end()) {
            cout << "Pair Found: "
                 << complement << " "
                 << arr[i];
            return;
        }

        s.insert(arr[i]);
    }

    cout << "No Pair Found";
}

int main() {
    int arr[] = {1, 4, 5, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 10;

    findPair(arr, n, target);

    return 0;
}