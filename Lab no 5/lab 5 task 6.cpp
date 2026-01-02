#include<iostream>
using namespace std;
int main(){
 double balance, withdrawalAmount;

    // Ask the user for their account balance
    cout << "Enter your account balance: ";
    cin >> balance;

    // Allow the user to input the withdrawal amount
    cout << "Enter the amount you want to withdraw: ";
    cin >> withdrawalAmount;

    // Check if the withdrawal amount is less than or equal to the account balance
    if (withdrawalAmount <= balance) {
        // Deduct the amount from the balance and display the remaining balance
        double remainingBalance = balance - withdrawalAmount;
        cout<< "Withdrawal successful. Remaining balance: " << remainingBalance <<endl; 
		}
    else 
        // Display a message: "Insufficient balance."
        {cout << "Insufficient balance." <<endl;
    }
    return 0;
}
