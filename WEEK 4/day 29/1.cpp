#include <iostream>
using namespace std;

int main() {
    int ch;
    float a,b;

    cin>>ch>>a>>b;

    switch(ch){
        case 1: cout<<a+b; break;
        case 2: cout<<a-b; break;
        case 3: cout<<a*b; break;
        case 4: cout<<a/b; break;
    }
}