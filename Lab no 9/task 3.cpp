//Keep asking until a positive number is entered
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a positive number: ";
    cin >> num;
    while (num <= 0) {
    cout << "Invalid input! Please enter a positive number: ";
    cin >> num;
    }
    cout << "You entered: " << num << endl;
    return 0;
}
