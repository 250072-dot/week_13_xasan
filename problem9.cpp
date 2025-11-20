# include <iostream>
using namespace std;

void avg(const double *arr,int size,double* result) {
    double avr = 0;

    for (int i = 0; i < size; i++) {
        avr +=*arr;
        arr++;
    }
    *result = avr / size;

}

int main() {
    double a[5] = {1,2,3,66,5};
    double val;
double *result = &val;
    (avg(a,5,result));
    cout<<*result;



return 0;}