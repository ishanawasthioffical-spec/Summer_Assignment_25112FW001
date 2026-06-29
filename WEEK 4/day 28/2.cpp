#include <iostream>
using namespace std;

class Bank{
    double balance;

public:
    Bank(){ balance=0; }

    void deposit(double amt){
        balance+=amt;
    }

    void display(){
        cout<<balance;
    }
};

int main(){
    Bank b;
    b.deposit(5000);
    b.display();
}