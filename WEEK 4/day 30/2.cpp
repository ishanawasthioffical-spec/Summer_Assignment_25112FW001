#include <iostream>
using namespace std;

struct Book{
    int id;
    string name;
};

int main() {
    Book b[2];

    for(int i=0;i<2;i++)
        cin>>b[i].id>>b[i].name;

    for(int i=0;i<2;i++)
        cout<<b[i].id<<" "<<b[i].name<<endl;
}