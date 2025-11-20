# include <iostream>
using namespace std;

void reversearr(int** arr, int size) {

    for (int i = 0; i < size; i++) {
        cout << *(*arr + size-(1+i))<<" ";

    }
}
int main() {
    int array[5] = {1,2,3,4,95};
    int *p1 = &array[0];
    int **p2 = &p1;
    reversearr(p2,5) ;


    return 0;
}