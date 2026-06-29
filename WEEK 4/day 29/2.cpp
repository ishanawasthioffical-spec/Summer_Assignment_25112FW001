#include <iostream>
using namespace std;

int main() {
    int arr[5]={1,2,3,4,5};
    int ch;

    cin>>ch;

    switch(ch){
        case 1:
            for(int x:arr)
                cout<<x<<" ";
            break;

        case 2:
        {
            int sum=0;
            for(int x:arr)
                sum+=x;
            cout<<sum;
        }
    }
}