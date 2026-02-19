//Menu-driven Program- Restaurant Bill
#include <iostream>
using namespace std;
void showMenu() {
    cout << "\n1. Burger - 250";
    cout << "\n2. Pizza - 800";
    cout << "\n3. Fries - 150";
    cout << "\n4. Sandwich - 300";
    cout << "\n5. Juice - 120";
    cout << "\n0. Exit\n";
}
double itemCost(int choice, int qty) {
    double price = 0;
    switch (choice) {
    case 1: price = 250; break;
    case 2: price = 800; break;
    case 3: price = 150; break;
    case 4: price = 300; break;
    case 5: price = 120; break;
    }
    return price * qty;
}
double finalBill(double total) {
    return total + (total * 0.10);   // 10% tax
}
int main() {
    int choice, qty;
    double total = 0;
    do {
    showMenu();
    cout << "Select item: ";
    cin >> choice;
    if (choice == 0) break;
    cout << "Enter quantity: ";
    cin >> qty;
    total += itemCost(choice, qty);
    } while (choice != 0);
    cout << "\nTotal Bill (with tax): " << finalBill(total) << endl;
    return 0;
}

