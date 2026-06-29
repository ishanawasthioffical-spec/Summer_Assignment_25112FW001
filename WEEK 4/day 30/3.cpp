#include <iostream>
using namespace std;

struct Employee{
    int id;
    string name;
    float salary;
};

int main() {
    Employee e;

    cin>>e.id>>e.name>>e.salary;

    cout<<e.id<<" "<<e.name<<" "<<e.salary;
}