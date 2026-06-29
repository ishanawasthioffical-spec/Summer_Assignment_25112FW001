#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string names[5];

    for(int i=0;i<5;i++)
        cin>>names[i];

    sort(names,names+5);

    for(string n:names)
        cout<<n<<endl;
}