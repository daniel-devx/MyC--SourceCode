#include <iostream>
#include <vector>

using namespace std;

// Structure to represent an item
struct Item {
    int weight;
    int value;
};

// Function to solve the 0/1 Knapsack Problem
int knapsack(vector<Item>& items, int capacity) {
    int n = items.size();
    // Create a 2D array to store the maximum value that can be obtained with the first i items and capacity j
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= capacity; ++j) {
            // If the current item's weight is greater than the current capacity, it cannot be included
            if (items[i - 1].weight > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                // Otherwise, choose the maximum of including or excluding the current item
                dp[i][j] = max(dp[i - 1][j], items[i - 1].value + dp[i - 1][j - items[i - 1].weight]);
            }
        }
    }

    // The maximum value is stored in the bottom-right cell of the dp array
    return dp[n][capacity];
}

int main() {
    vector<Item> items = {{2, 12}, {1, 10}, {3, 20}, {2, 15}};
    int capacity = 5;

    int maxValue = knapsack(items, capacity);
    cout << "Maximum value that can be obtained: " << maxValue << endl;

    return 0;
}
