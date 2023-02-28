#include <iostream>
#include <string>

/*
    Solution of question two

    Shahrear Al Sakib
    Id. 2110976109
    Date : 28 / 02 / 2023

*/
using namespace std;

void deleteElement(string arr[], int& n, string key) {
    int start = 0;
    int end = n - 1;
    int mid;

    // Binary search to find the index of the key
    while (start <= end) {
        mid = (start + end) / 2;

        if (arr[mid] == key) {
            // Shift all elements to the right of the key one position to the left
            for (int i = mid; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
            return;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    // Element not found
    cout << "Element not found" << endl;
}

int main() {
    string arr[] = {"Ali", "Hassan", "Karim", "Majid", "Nadia"};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    deleteElement(arr, n, "Karim");

    cout << "Array after deleting Karim: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
