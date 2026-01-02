//Currency converter using switch(USD to PKR,INR,EURO)
#include <iostream>
using namespace std;

int main() {
    int choice;
    float amount;

    cout << "Enter amount in USD: ";
    cin >> amount;

    cout << "1. USD to PKR\n";
    cout << "2. USD to INR\n";
    cout << "3. USD to Euro\n";
    cout << "Choose option: ";
    cin >> choice;

    switch (choice) {
    case 1:
    cout << "PKR = " << amount * 280;
    break;
    case 2:
    cout << "INR = " << amount * 83;
    break;
    case 3:
    cout << "Euro = " << amount * 0.92;
    break;
    default:
    cout << "Invalid option!";
    }

    return 0;
}
