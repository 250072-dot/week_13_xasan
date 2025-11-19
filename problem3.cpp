# include <iostream>
using namespace std;

int countvalid(int *arr, int size) {
    int cout =0;
    for (int i=0; i<size; i++) {
        if (arr == 0){cout++;}
        arr++;
    }
    return size-cout;
}
int main() {
    int array[5]={1,2,4,4,5};
    cout<<countvalid(array,5);
}