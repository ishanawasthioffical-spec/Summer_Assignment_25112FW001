#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string str;
    cin >> str;

    unordered_set<char> s;

    for(char ch : str) {
        if(s.count(ch)) {
            cout << ch;
            return 0;
        }
        s.insert(ch);
    }

    cout << "No repeating character";
}