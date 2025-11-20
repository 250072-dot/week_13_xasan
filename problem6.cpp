# include <iostream>
using namespace std;
void printifvalid(int* p) {
    if (p == nullptr)
        {cout<<"nullprint";}

    else
        {cout<<*p;}
}

int main() {
    string s;

    cin >>s;

    if (s=="n") {
        printifvalid(nullptr);
    }

    else {
        int l = stoi(s);
        printifvalid(&l);
    };
}