#include <iostream>
using namespace std;

// Function to check if an array is sorted in ascending order
bool checkSorted(int arr[], int n) {
    // Base case: 0 or 1 element is always sorted
    if (n <= 1) {
        return true;
    }

    // If the first element is greater than the next, not sorted
    if (arr[0] > arr[1]) {
        return false;
    }

    // Recursive call on the remaining array
    return checkSorted(arr + 1, n - 1);
}

int main() {
    int numbers[] = {2, 3, 5, 7, 9};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    if (checkSorted(numbers, length)) {
        cout << "✅ The array is sorted in ascending order!" << endl;
    } else {
        cout << "❌ The array is NOT sorted." << endl;
    }

    return 0;
}
