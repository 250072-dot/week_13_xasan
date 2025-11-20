# include <iostream>
using namespace std;
int main() {
    int *p1 = NULL;
    // legacy macro
    int *p2 = nullptr; // C++11
    if(p1 == nullptr) cout << "is null" << endl; else cout << "not null" << endl;
    if(p2 == nullptr) cout << "is null" << endl; else cout << "not null" << endl;
    return 0;
}