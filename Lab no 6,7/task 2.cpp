//Temperature based suggestions
#include <iostream>
using namespace std;

int main() {
    int temp;

    cout << "Enter temperature in Celsius: ";
    cin >> temp;

    if (temp >= 40) {
    cout << "Stay indoors. It is extremely hot and dangerous to health." << endl;
    }
    else if (temp >= 30 && temp <= 39) {
    cout << "Drink plenty of water to stay hydrated in hot weather." << endl;
    }
    else if (temp >= 20 && temp <= 29) {
    cout << "The weather is pleasant and suitable for outdoor activities." << endl;
    }
    else {
    cout << "Wear warm clothes to stay comfortable in cooler weather." << endl;
    }

    return 0;
}
