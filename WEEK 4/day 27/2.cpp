#include <iostream>
using namespace std;

struct Employee{
    int id;
    string name;
};

int main() {
    Employee e[3];

    for(int i=0;i<3;i++)
        cin>>e[i].id>>e[i].name;

    for(int i=0;i<3;i++)
        cout<<e[i].id<<" "<<e[i].name<<endl;
}