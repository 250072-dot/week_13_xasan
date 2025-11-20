# include <iostream>
using namespace std;

int sum2d(int** m, int r, int c) {
    int sum = 0;
    for (int k = 0; k < r; k++) {
        for (int j = 0; j < c; j++) {
            sum += *(*(m + k)+j);


        }
    }
    return sum;
}
int main () {
    int**pt = new int*[2];
    for (int i = 0; i < 2; i++) {
        pt [i] = new int[2];
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> *(*(pt + i)+j);
        }
    }
    cout<<sum2d(pt,2,2)<<endl;
}