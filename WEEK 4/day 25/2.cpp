#include <iostream>
using namespace std;

int main() {
    string s1,s2;
    cin>>s1>>s2;

    for(char ch:s1) {
        if(s2.find(ch)!=string::npos)
            cout<<ch<<" ";
    }
}