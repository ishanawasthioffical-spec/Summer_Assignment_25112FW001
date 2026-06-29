#include <iostream>
using namespace std;

int main() {
    int seats=50;
    int book;

    cin>>book;

    if(book<=seats){
        seats-=book;
        cout<<"Booked";
    }
    else
        cout<<"Not Available";
}