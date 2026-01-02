//total purchase calculation

#include <iostream>
using namespace std;

int main() {
    // Constants for prices and tax rate
    const double item1 = 12.95;
    const double item2 = 24.95;
    const double item3 = 6.95;
    const double item4 = 14.95;
    const double item5 = 3.95;
    const double salesTaxRate = 0.06;

    // Display price of each item
    cout << "Price of item 1: $" << item1 << endl;
    cout << "Price of item 2: $" << item2 << endl;
    cout << "Price of item 3: $" << item3 << endl;
    cout << "Price of item 4: $" << item4 << endl;
    cout << "Price of item 5: $" << item5 << endl;

    // Calculate subtotal
    double subtotal = item1 + item2 + item3 + item4 + item5;
    cout << "Subtotal: $" << subtotal << endl;

    // Calculate sales tax
    double salesTax = subtotal * salesTaxRate;
    cout << "Sales Tax (6%): $" << salesTax << endl;

    // Calculate total amount
    double total = subtotal + salesTax;
    cout << "Total: $" << total << endl;

    return 0;
}
