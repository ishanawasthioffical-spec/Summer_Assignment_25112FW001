#include <iostream>
using namespace std;

struct Student{
    int roll;
    string name;
};

Student s[100];
int countStu=0;

void addStudent(){
    cin>>s[countStu].roll;
    cin>>s[countStu].name;
    countStu++;
}

void displayStudents(){
    for(int i=0;i<countStu;i++)
        cout<<s[i].roll<<" "
            <<s[i].name<<endl;
}

int main() {
    int choice;

    do{
        cout<<"\n1.Add Student";
        cout<<"\n2.Display Students";
        cout<<"\n3.Exit\n";

        cin>>choice;

        switch(choice){
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;
        }

    }while(choice!=3);

    return 0;
}