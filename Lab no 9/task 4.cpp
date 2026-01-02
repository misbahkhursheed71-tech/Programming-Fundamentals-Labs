//Sum of first five natural numbers using while loop
#include <iostream>
using namespace std;
int main() {
    int i = 1, sum = 0;
    while (i <= 5) {
    sum += i;
    i++;
    }
    cout << "Sum of first five natural numbers is: " << sum << endl;
    return 0;
} 
