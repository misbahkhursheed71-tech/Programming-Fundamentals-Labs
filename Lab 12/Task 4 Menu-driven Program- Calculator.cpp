//Menu-driven Program- Calculator
#include <iostream>
using namespace std;
double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double divi(double a, double b) { return a / b; }
int main() {
    int choice;
    double x, y;
    do {
    cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n0. Exit\n";
    cout << "Enter choice: ";
    cin >> choice;
    if (choice == 0) break;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    switch (choice) {
    case 1: cout << "Result: " << add(x, y); break;
    case 2: cout << "Result: " << sub(x, y); break;
    case 3: cout << "Result: " << mul(x, y); break;
    case 4: cout << "Result: " << divi(x, y); break;
    default: cout << "Invalid Choice";
    }
    } while (choice != 0);
    return 0;
}

