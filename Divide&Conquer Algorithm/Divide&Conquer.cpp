#include <iostream>
#include <vector>
using namespace std;

// Function to find the maximum element in an array using Divide and Conquer
int findMax(const vector<int>& arr, int left, int right) {
    // Base case: If the array has only one element
    if (left == right) {
        return arr[left];
    }

    // Divide the array into two halves
    int mid = left + (right - left) / 2;

    // Recursively find the maximum element in each half
    int maxLeft = findMax(arr, left, mid);
    int maxRight = findMax(arr, mid + 1, right);

    // Return the maximum of the two maximums
    return max(maxLeft, maxRight);
}

int main() {
    // Sample array
    vector<int> arr = {5, 3, 9, 1, 7, 4, 8};

    // Find the maximum element in the array using Divide and Conquer
    int maxElement = findMax(arr, 0, arr.size() - 1);

    // Print the maximum element
    cout << "Maximum Element: " << maxElement << endl;

    return 0;
}
