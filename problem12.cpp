# include <iostream>
using namespace std;
bool identical(const int*a, int**bptr, int size) {
    for (int i = 0; i < size; i++) {
        if (*(a+i) != *((*bptr)+i)) { return false; }
    }
    return true;
}

int main() {
    int arr1[5] ={1,2,3,4,5};
    int arr2[5] = {1,2,3,4,5};
    int *p1 = &arr2[0];
    int **p2 = &p1;
    cout<<identical(arr1,p2,5);
}