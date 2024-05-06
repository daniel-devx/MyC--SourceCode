#include <iostream>
#include <vector>
using namespace std;

// Function to find the majority element using Boyer-Moore Majority Vote Algorithm
int findMajorityElement(vector<int>& nums) {
    int candidate = 0;
    int count = 0;

    for (int num : nums) {
        if (count == 0) {
            candidate = num;
            count = 1;
        } else if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Verify if the candidate is indeed the majority element
    count = 0;
    for (int num : nums) {
        if (num == candidate) {
            count++;
        }
    }
    if (count > nums.size() / 2) {
        return candidate;
    } else {
        return -1; // No majority element found
    }
}

int main() {
    vector<int> nums = {2, 2, 2, 3, 4, 2, 2};
    
    int majorityElement = findMajorityElement(nums);
    if (majorityElement != -1) {
        cout << "Majority Element: " << majorityElement << endl;
    } else {
        cout << "No Majority Element Found" << endl;
    }

    return 0;
}
