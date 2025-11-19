# include <iostream>
using namespace std;
// problem 1
 void setToHundred(int *p) {
  *p = 100;
  cout <<*p;
 }
int main() {

  int a;
  cin >> a;
  int *p= &a;
  setToHundred(p);
 }