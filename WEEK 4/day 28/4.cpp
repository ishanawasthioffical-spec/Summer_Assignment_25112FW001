#include <iostream>
using namespace std;

struct Contact{
    string name;
    string phone;
};

int main() {
    Contact c[3];

    for(int i=0;i<3;i++)
        cin>>c[i].name>>c[i].phone;

    for(int i=0;i<3;i++)
        cout<<c[i].name<<" "<<c[i].phone<<endl;
}