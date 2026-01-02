//shopping system with invoice & discount using switch
#include <iostream>
using namespace std;
int main() {
    int category, item, qty;
    float price = 0, total, discount = 0;
    cout << "1. Electronics\n";
    cout << "2. Clothing\n";
    cout << "3. Groceries\n";
    cout << "Choose category: ";
    cin >> category;
    switch (category) {
    case 1:
    cout << "1. Laptop ($1000)\n2. Smartphone ($700)\n3. Headphones ($150)\n";
    cin >> item;
    if (item == 1) price = 1000;
    else if (item == 2) price = 700;
    else if (item == 3) price = 150;
    break;
    case 2:
    cout << "1. Jacket ($120)\n2. T-shirt ($40)\n3. Jeans ($60)\n";
    cin >> item;
    if (item == 1) price = 120;
    else if (item == 2) price = 40;
    else if (item == 3) price = 60;
    break;
    case 3:
    cout << "1. Milk ($2)\n2. Bread ($3)\n3. Eggs ($5)\n";
    cin >> item;
    if (item == 1) price = 2;
    else if (item == 2) price = 3;
    else if (item == 3) price = 5;
    break;
    default:
    cout << "Invalid category!";
    return 0;
    }

    cout << "Enter quantity: ";
    cin >> qty;

    total = price * qty;

    if (total >= 100 && total <= 500)
    discount = total * 0.10;
    else if (total > 500)
    discount = total * 0.20;

    cout << "\nTotal Amount = $" << total;
    cout << "\nDiscount = $" << discount;
    cout << "\nFinal Bill = $" << total - discount;

    return 0;
} 
