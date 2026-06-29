#include <iostream>
using namespace std;

struct Book{
    int id;
    string title;
};

int main() {
    Book b[3];

    for(int i=0;i<3;i++)
        cin>>b[i].id>>b[i].title;

    for(int i=0;i<3;i++)
        cout<<b[i].id<<" "<<b[i].title<<endl;
}