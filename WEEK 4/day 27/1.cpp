#include <iostream>
using namespace std;

struct Student{
    int roll;
    string name;
};

int main() {
    Student s[5];

    for(int i=0;i<5;i++)
        cin>>s[i].roll>>s[i].name;

    for(int i=0;i<5;i++)
        cout<<s[i].roll<<" "<<s[i].name<<endl;
}