//Simple calculator using switch 
#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout<<"Choose the operator from below menu"<<endl;
    cout<<"+ for addition\n";
    cout<<"- for subtaction\n";
    cout<<"* for multiplication\n";
    cout<<"/ for divison\n";
    cin>>op;
    switch (op) {
    case '+':
    cout << "Result = " << num1 + num2;
    break;
    case '-':
    cout << "Result = " << num1 - num2;
    break;
    case '*':
    cout << "Result = " << num1 * num2;
    break;
    case '/':
    if (num2 != 0)
    cout << "Result = " << num1 / num2;
    break;
    default:
    cout << "Invalid operator!";
    }

    return 0;
}
