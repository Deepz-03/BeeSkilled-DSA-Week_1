P
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double sum = 0;

    cout << "Enter number of students: ";
    cin >> n;

    if (n < 3) {
        cout << "Please enter at least 3 students.";
        return 0;
    }

    vector<int> marks(n);

    cout << "Enter student marks: ";

    for (int i = 0; i < n; i++) {
        cin >> marks[i];
        sum += marks[i];
    }

    sort(marks.begin(), marks.end(), greater<int>());

    cout << "\nTop 3 Marks:\n";

    for (int i = 0; i < 3; i++) {
        cout << marks[i] << endl;
    }

    double average = sum / n;

    cout << fixed << setprecision(2);
    cout << "\nAverage Marks: " << average << endl;

    return 0;
}
