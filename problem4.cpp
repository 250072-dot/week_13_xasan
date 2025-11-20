# include <iostream>
using namespace std;

void fixneg(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (*arr < 0) {*arr=0;}
        arr++;
    }
}
int main () {
    int arr[5] = {0,-1,-3, 2, 4};
    fixneg(arr, 5);
    for (int i = 0; i < 5; i++) {
      cout << arr[i] << endl;

    }
}