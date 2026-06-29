#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    stringstream ss(str);
    string word,longest;

    while(ss >> word) {
        if(word.length() > longest.length())
            longest = word;
    }

    cout << longest;
}