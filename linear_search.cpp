#include <iostream>
using namespace std;

// Function to check if a key exists in array using recursion
bool searchKey(int arr[], int n, int key) {
    // Base case: no elements left
    if (n == 0) return false;

    // Check current element
    if (arr[0] == key) return true;

    // Recursive call on remaining array
    return searchKey(arr + 1, n - 1, key);
}

int main() {
    int numbers[] = {2, 3, 5, 7, 9};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    int key = 9;

    if (searchKey(numbers, length, key)) {
        cout << "✅ Key Found" << endl;
    } else {
        cout << "❌ Key Not Found" << endl;
    }

    return 0;
}
