# Divide and Conquer Algorithm Implementation in C++

## Introduction

The Divide and Conquer algorithm is a powerful technique used to solve problems by dividing them into smaller subproblems, solving each subproblem recursively, and then combining the solutions to solve the original problem. This implementation demonstrates the Divide and Conquer algorithm to find the maximum element in an array.

## Functions

### findMax Function

- **Description:** Recursively finds the maximum element in an array using the Divide and Conquer approach.
- **Input Parameters:**
  - `arr`: A vector of integers representing the input array.
  - `left`: The left index of the subarray.
  - `right`: The right index of the subarray.
- **Returns:** The maximum element in the given subarray.

## Main Function

- Initializes a sample vector of integers representing the input array.
- Calls the `findMax` function to find the maximum element in the entire array.
- Prints the maximum element found.

## Example

Suppose we have the input array: `[5, 3, 9, 1, 7, 4, 8]`. After applying the Divide and Conquer algorithm, the maximum element in the array is determined to be `9`.

## Usage

1. Compile the source code using a C++ compiler.
2. Run the executable.
3. The program will print the maximum element in the input array.

## Notes

- The Divide and Conquer algorithm is a recursive technique that breaks down a problem into smaller subproblems, solves them independently, and then combines their solutions to solve the original problem.
- This implementation uses the Divide and Conquer approach to find the maximum element in an array.
- The time complexity of this algorithm is O(nlogn), where n is the size of the array.

This documentation provides an overview of the code structure, functionality, usage instructions, and example output.
