# include <iostream>
using namespace std;

int removevalue(int * arr, int size, int val) {
    int *newarr = arr;
    int loc = 0;
    for (int i = 0; i < size; i++)
        if (*(arr + i) != val) {
            *(newarr + loc) = *(arr + i);
            loc++;
        }
    return loc;
}

int main() {
    int arr[5] = {2,2,3,2,6};
    int value = 2;
    int new_size = removevalue(arr, 5, value);
    for (int i = 0; i < new_size; i++) {
        cout << arr[i] << " ";
    }
}