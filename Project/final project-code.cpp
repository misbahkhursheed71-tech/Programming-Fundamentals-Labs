#include <iostream>
using namespace std;
// Function declarations
void createAccount(char name[], char accName[], double &balance);
void depositMoney(double &balance, int &count);
void withdrawMoney(double &balance, int &count);
void showAccountType(double balance);
int main() {
    cout << "===== Welcome to Bank Account Management System =====\n\n";
    int startChoice;
    cout << "Do you want to perform any transaction?\n";
    cout << "1. Yes\n";
    cout << "2. Exit\n";
    cout << "Enter choice: ";
    cin >> startChoice;
    if (startChoice == 2) {
    cout << "\nThank you for using Bank Account Management System!\n";
    return 0;
    }
    else if (startChoice != 1) {
    cout << "Invalid choice! Enter a valid option\n";
    return 0;
    }
    // Account setup (ONLY ONCE)
    int choice;
    char name[30], accName[30];
    double balance = 0;
    cout << "\nDo you have a bank account?\n";
    cout << "1. Yes\n";
    cout << "2. No\n";
    cout << "Enter choice: ";
    cin >> choice;
    if (choice == 1) {
    cout << "Enter your current balance: ";
    cin >> balance;
    }
    else if (choice == 2) {
    createAccount(name, accName, balance);
    }
    else {
    cout << "Invalid choice!\n";
    return 0;
    }
    // Transactions start here
    int transactionCount = 0;
    char again;
    do {
    int option;
    cout << "\n--- Transaction Menu ---\n";
    cout << "1. Deposit Money\n";
    cout << "2. Withdraw Money\n";
    cout << "Enter option: ";
    cin >> option;
    switch (option) {
    case 1:
    depositMoney(balance, transactionCount);
    break;
    case 2:
    withdrawMoney(balance, transactionCount);
    break;
    default:
    cout << "Invalid option!\n";
    }
    cout << "\nRemaining Balance: " << balance << endl;
    showAccountType(balance);
    cout << "Total Transactions: " << transactionCount << endl;
    cout << "\nDo you want another transaction? (y/n): ";
    cin >> again;
    } while (again == 'y' || again == 'Y');
    cout << "\nThank you for using Bank Account Management System!\n";
    return 0;
}
// Create new account
void createAccount(char name[], char accName[], double &balance) {
cout << "\n--- Create New Account ---\n";
cout << "Enter Name: ";
cin >> name;
    cout << "Enter Account Name: ";
    cin >> accName;
    cout << "Enter initial deposit: ";
    cin >> balance;
    cout << "Account created successfully!\n";
}
// Deposit function
void depositMoney(double &balance, int &count) {
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    balance += amount;
    count++;
    cout << "Deposit successful!\n";
}
// Withdraw function
void withdrawMoney(double &balance, int &count) {
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount > balance) {
    cout << "Insufficient balance!\n";
    }
    else {
    balance -= amount;
    count++;
    cout << "Withdrawal successful!\n";
    }
}
// Account type function
void showAccountType(double balance) {
	if(balance<=10000){
	cout<<"Account Type: Low Balanced Account\n";
	}
    else if (balance <= 30000) {
    cout << "Account Type: Saving Account\n";
    }
    else if (balance <= 70000) {
    cout << "Account Type: Premium Account\n";
    }
    else {
    cout << "Account Type: Standard Account\n";
    }
}
