# include <iostream>
using namespace std;

void swapptr(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    cout << *a<<" " << *b << endl;
}

void swapref(int &aa, int &bb) {
    int t = aa;
    aa=bb;
    bb=t;
   cout <<aa<<" " << bb << endl;
}

int main () {

    int a=5;
    int *pa = &a;
    int b=10;
    int *pb = &b;
    swapptr(pa,pb);
    swapref(a,b);
    return 0;
}