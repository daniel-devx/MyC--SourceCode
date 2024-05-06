# Kadane's Algorithm Implementation in C++

## Introduction

This code provides an implementation of Kadane's algorithm in C++. Kadane's algorithm efficiently finds the maximum subarray sum within a given array of integers.

## Implementation Details

The code is implemented in C++ and demonstrates how to find the maximum subarray sum using Kadane's algorithm.

## Code Explanation

1. **Header Files**: The code includes necessary header files such as `<iostream>` and `<vector>`.

2. **Function: maxSubarraySum**:

   - This function takes a vector of integers as input and returns the maximum subarray sum.
   - It initializes two variables, `max_current` and `max_global`, to the first element of the array.
   - It iterates through the array, updating `max_current` to be the maximum of the current element or the sum of the current element and the previous `max_current`.
   - It also updates `max_global` to be the maximum of `max_global` and `max_current`.
   - After iterating through the array, it returns `max_global` as the maximum subarray sum.

3. **Main Function**:
   - Initializes a sample array of integers.
   - Calls the `maxSubarraySum` function to find the maximum subarray sum.
   - Prints the maximum subarray sum.

## Example Output

Maximum subarray sum: 6

## Conclusion

This code demonstrates how to efficiently find the maximum subarray sum using Kadane's algorithm in C++. It provides a clear example of how to implement and utilize this algorithm in solving problems related to finding maximum subarrays.
