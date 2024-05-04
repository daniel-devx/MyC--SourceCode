#include <iostream>
#include <vector>

using namespace std;

// Function to find pairs in a sorted array that sum up to a given target
void findPairs(vector<int>& arr, int target) {
    int left = 0; // Pointer starting from the beginning of the array
    int right = arr.size() - 1; // Pointer starting from the end of the array

    // Continue until the pointers meet
    while (left < right) {
        int sum = arr[left] + arr[right]; // Calculate the sum of elements pointed by left and right pointers

        if (sum == target) {
            cout << "Pair found: (" << arr[left] << ", " << arr[right] << ")" << endl;
            left++; // Move left pointer to the right
            right--; // Move right pointer to the left
        } else if (sum < target) {
            left++; // If sum is less than target, increment left pointer
        } else {
            right--; // If sum is greater than target, decrement right pointer
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int target = 9;
    
    cout << "Pairs that sum up to " << target << ":" << endl;
    findPairs(arr, target);

    return 0;
}
