//University Exam Reults & scolarship Eliibility System
#include <iostream>
using namespace std;
char getGrade(int marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 80) return 'B';
    else if (marks >= 70) return 'C';
    else if (marks >= 60) return 'D';
    else return 'F';
}
int main() {
    int sub1, sub2, sub3;

    cout << "Enter marks for Subject 1: ";
    cin >> sub1;
    cout << "Enter marks for Subject 2: ";
    cin >> sub2;
    cout << "Enter marks for Subject 3: ";
    cin >> sub3;

    char g1 = getGrade(sub1);
    char g2 = getGrade(sub2);
    char g3 = getGrade(sub3);

    // Failure condition
    if (g1 == 'F' || g2 == 'F' || g3 == 'F') {
    cout << "Grade Subject 1: " << g1 << endl;
    cout << "Grade Subject 2: " << g2 << endl;
    cout << "Grade Subject 3: " << g3 << endl;
    cout << "Failed" << endl;
    return 0;
    }

    int total = sub1 + sub2 + sub3;
    double percentage = (total / 300.0) * 100;

    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade Subject 1: " << g1 << endl;
    cout << "Grade Subject 2: " << g2 << endl;
    cout << "Grade Subject 3: " << g3 << endl;

    // Scholarship Eligibility
    if (g1 == 'A' && g2 == 'A' && g3 == 'A' && total >= 270) {
    cout << "Scholarship: Merit Scholarship" << endl;
    }
    else if ((g1 == 'A' || g1 == 'B') &&
    (g2 == 'A' || g2 == 'B') &&
    (g3 == 'A' || g3 == 'B') &&
    total >= 240) {
    cout << "Scholarship: Regular Scholarship" << endl;
    }
    else {
    cout << "Scholarship: Not Eligible" << endl;
    }
    return 0;
}
