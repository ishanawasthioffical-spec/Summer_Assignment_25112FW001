#include <iostream>
using namespace std;

int main() {
    int score=0,ans;

    cout<<"Capital of India?\n";
    cout<<"1.Delhi 2.Mumbai\n";
    cin>>ans;

    if(ans==1)
        score++;

    cout<<"Score = "<<score;
}