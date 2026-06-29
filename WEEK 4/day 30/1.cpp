#include <iostream>
using namespace std;

int main() {
    int roll[5];
    string name[5];

    for(int i=0;i<5;i++)
        cin>>roll[i]>>name[i];

    for(int i=0;i<5;i++)
        cout<<roll[i]<<" "<<name[i]<<endl;
}