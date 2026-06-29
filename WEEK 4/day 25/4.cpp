#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(string a,string b){
    return a.length()<b.length();
}

int main() {
    string words[5];

    for(int i=0;i<5;i++)
        cin>>words[i];

    sort(words,words+5,cmp);

    for(string w:words)
        cout<<w<<" ";
}