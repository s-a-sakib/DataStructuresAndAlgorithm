#include <iostream>
using namespace std;

/*
    Solution of question two

    Shahrear Al Sakib
    Id. 2110976109
    Date : 28 / 02 / 2023

*/

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pos = 2;

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "Array after deleting item from position 2: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
