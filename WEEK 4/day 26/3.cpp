#include <iostream>
using namespace std;

int main() {
    double balance=10000;
    int choice;
    double amount;

    cout<<"1.Deposit\n2.Withdraw\n3.Check Balance\n";
    cin>>choice;

    switch(choice){
        case 1:
            cin>>amount;
            balance+=amount;
            break;

        case 2:
            cin>>amount;
            if(amount<=balance)
                balance-=amount;
            break;

        case 3:
            cout<<balance;
    }
}