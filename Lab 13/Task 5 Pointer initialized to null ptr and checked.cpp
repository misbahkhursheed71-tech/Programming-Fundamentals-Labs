//Pointer initialized to null ptr and checked
#include <iostream>
using namespace std;
int main() {
    int *ptr = 0;
    if (ptr == 0) {
    cout << "Pointer is null and does not point to any valid memory." << endl;
    } else {
    cout << "Pointer holds address: " << ptr << endl;
    }
    return 0;
}

