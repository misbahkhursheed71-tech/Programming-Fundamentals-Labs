//Meanu driven banking system using while loop
#include <iostream>
using namespace std;
int main() {
    int choice;
    double balance = 1000, amount;
    while (true) {
    cout << "\n--- Banking Menu ---" << endl;
    cout << "1. Deposit Money" << endl;
    cout << "2. Withdraw Money" << endl;
    cout << "3. Check Balance" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 1) {
    cout << "Enter amount to deposit: ";
    cin >> amount;
    balance += amount;
    cout << "Amount deposited successfully." << endl;
    }
    else if (choice == 2) {
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if (amount <= balance) {
    balance -= amount;
    cout << "Withdrawal successful." << endl;
    } else {
    cout << "Insufficient balance!" << endl;
    }
    }
    else if (choice == 3) {
    cout << "Current balance: " << balance << endl;
    }
    else if (choice == 4) {
    cout << "Thank you for using the banking system." << endl;
    break;
    }
    else {
    cout << "Invalid choice! Please try again." << endl;
    }
    }
    return 0;
}
