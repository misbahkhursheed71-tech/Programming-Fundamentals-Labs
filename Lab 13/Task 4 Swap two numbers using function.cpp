//Swap two numbers using function
#include <iostream>
using namespace std;
void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 5, y = 10;
    cout << "Before Swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    swapNumbers(&x, &y);
    cout << "After Swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}

