#include <iostream>
using namespace std;

struct Item{
    int id;
    string name;
    int qty;
};

int main() {
    Item p;

    cin>>p.id>>p.name>>p.qty;

    cout<<p.id<<" "<<p.name<<" "<<p.qty;
}