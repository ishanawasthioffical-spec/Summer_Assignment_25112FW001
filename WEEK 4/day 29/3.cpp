#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin>>str;

    int ch;
    cin>>ch;

    switch(ch){
        case 1:
            cout<<str.length();
            break;

        case 2:
            reverse(str.begin(),str.end());
            cout<<str;
            break;
    }
}