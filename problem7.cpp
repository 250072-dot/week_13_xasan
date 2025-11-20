# include <iostream>
using namespace std;

int *findmax( int * arr, int size) {
        int *max = arr;
        for (int i = 0; i < size; i++) {
                if ( *max < *(arr + i)) {*max = *(arr + i);}
        }
        return max;
}

int main() {
        int array[5] = {1,2,3,4,95};
        cout << *findmax(array, 5) << endl;
}