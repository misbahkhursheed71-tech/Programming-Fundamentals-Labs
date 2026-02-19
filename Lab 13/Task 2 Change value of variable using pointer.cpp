//Change value of variable using pointer
#include <iostream>
using namespace std;
int main() {
    int num = 20;
    int *ptr = &num;
    *ptr = 50;   // Changing value using pointer
    cout << "Modified value of num: " << num << endl;
    return 0;
}

