#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> target;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "Element found at position "
                 << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element not found" << endl;
    }

    return 0;
}
