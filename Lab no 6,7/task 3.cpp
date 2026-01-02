//Simple login system
#include <iostream>
using namespace std;
int main() {
    string username, password;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (username == "admin" && password == "12345") {
    cout << "Access Granted." << endl;
    }
    else if (username == "admin" && password != "12345") {
    cout << "Wrong Password." << endl;
    }
    else {
    cout << "User Not Found." << endl;
    }

    return 0;
}
