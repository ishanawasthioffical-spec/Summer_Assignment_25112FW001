#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int num = rand()%100+1;
    int guess;

    do{
        cin>>guess;

        if(guess>num)
            cout<<"Too High\n";
        else if(guess<num)
            cout<<"Too Low\n";

    }while(guess!=num);

    cout<<"Correct!";
}