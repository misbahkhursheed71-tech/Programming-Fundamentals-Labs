//average of predefined test score rounded to two decimal places
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Predefined test scores
    const double score1 = 85.50;
    const double score2 = 90.75;
    const double score3 = 88.25;

    // Calculate average
    double average = (score1 + score2 + score3) / 3.0;

    // Display average rounded to 2 decimal places
    cout << fixed << setprecision(2);
    cout << "The average of " << score1 << ", " << score2 << ", and " << score3 
         << " = " << average << endl;

    return 0;
}
