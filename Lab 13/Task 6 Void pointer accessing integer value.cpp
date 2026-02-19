//Void pointer accessing integer value
#include <iostream>
using namespace std;
int main() {
    int num = 100;
    void *vptr = &num;
    // Typecasting before dereferencing
    cout << "Value using void pointer: " << *(static_cast<int*>(vptr)) << endl;
    return 0;
}

