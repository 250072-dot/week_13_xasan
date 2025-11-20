# include <iostream>
using namespace std;

void mergesorted( const int * a, int n, const int * b, int m, int* out) {
    int count =0;
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < m; i++) {
            if (*(a+k) > *(b+i) ) count++;
        }
        *(out+k+count) = *(a+k);
        count = 0;
    }
    for (int k = 0; k < m; k++) {
        for (int i = 0; i < n; i++) {
            if (*(b+k) > *(a+i) ) count++;

        }
        *(out+k+count) = *(b+k);
        count = 0;
    }

}

int main() {
    int arr1[5] = {-78,2,98,99,321};
    int arr2[4] = {0,3,7,41};
    int akk[9];
    int *out = &akk[0];
    mergesorted(arr1, 5, arr2, 4, out);
    for (int i = 0; i < 9; i++) {
        cout << *out << endl;
        out++;
    }
}