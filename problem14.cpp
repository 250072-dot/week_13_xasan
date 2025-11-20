#include <iostream>
using namespace std;

int cstrlen(char** s) {
    int len = 0;
    char* p = *s;

    while (*p != '\0') {
        p++;    len++;
    }
    return len;
}

int main() {
    char word[100];
    cin >> word;

    char* p = word;
    char** pp = &p;

    cout << "Length = " << cstrlen(pp);
    return 0;
}
