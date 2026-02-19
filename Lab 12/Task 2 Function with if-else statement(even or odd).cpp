//Function with if-else statement(even or odd)
#include <iostream>
using namespace std;
void evenodd(int num) {
    if (num % 2 == 0)
    cout << "Even" << endl;
    else
    cout << "Odd" << endl;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    evenodd(n);
    return 0;
}

