# 0/1 Knapsack Problem Implementation in C++

## Introduction

This code provides an implementation of the 0/1 Knapsack Problem in C++ using dynamic programming. The 0/1 Knapsack Problem is a classic problem in combinatorial optimization, where the goal is to maximize the total value of items that can be included in a knapsack of fixed capacity without exceeding the weight limit.

## Implementation Details

The code is implemented in C++ and demonstrates how to solve the 0/1 Knapsack Problem efficiently using dynamic programming.

## Code Explanation

1. **Header Files**: The code includes necessary header files such as `<iostream>` and `<vector>`.

2. **Struct: Item**:

   - This structure represents an item and contains two fields: `weight` and `value`. Each item has a weight and a corresponding value.

3. **Function: knapsack**:

   - This function takes a vector of items and the capacity of the knapsack as input parameters.
   - It creates a 2D array to store the maximum value that can be obtained with the first i items and capacity j.
   - It iterates through each item and capacity combination, calculating the maximum value that can be obtained.
   - Finally, it returns the maximum value that can be obtained within the given capacity.

4. **Main Function**:
   - Initializes a vector of items and specifies the capacity of the knapsack.
   - Calls the `knapsack` function with the items and capacity.
   - Prints the maximum value that can be obtained.

## Example Output

Maximum value that can be obtained: 37

## Conclusion

This code demonstrates how to efficiently solve the 0/1 Knapsack Problem using dynamic programming in C++. It provides a clear example of how to implement and utilize this algorithm in solving combinatorial optimization problems, particularly in scenarios where maximizing value under capacity constraints is crucial.
