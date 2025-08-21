#include <iostream>
#include <vector>
using namespace std;

// Recursive Binary Search Function
int runBinarySearch(vector<int> &arr, int low, int high, int target) {
    // Base condition: element not found
    if (low > high) {
        return -1;
    }

    int middle = (low + high) / 2;  // mid index

    if (arr[middle] == target) {
        return middle;  // found the element
    }

    if (arr[middle] < target) {
        // search in right half
        return runBinarySearch(arr, middle + 1, high, target);
    } else {
        // search in left half
        return runBinarySearch(arr, low, middle - 1, target);
    }
}

// Wrapper function
int findElement(vector<int> &arr, int target) {
    int size = arr.size();
    return runBinarySearch(arr, 0, size - 1, target);
}

// Driver Code (optional if you want to test)
int main() {
    vector<int> nums = {2, 4, 6, 8, 10, 12};
    int key = 10;

    int position = findElement(nums, key);

    if (position != -1) {
        cout << "Element found at index: " << position << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
