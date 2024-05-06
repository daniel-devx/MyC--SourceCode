# Boyer-Moore Majority Vote Algorithm

## Introduction

The Boyer-Moore Majority Vote Algorithm is used to find the majority element in an array, which is an element that appears more than n/2 times (where n is the size of the array). The algorithm operates in O(n) time complexity and O(1) space complexity.

## Functions

### findMajorityElement Function

- **Description:** Finds the majority element in the given array using the Boyer-Moore Majority Vote Algorithm.
- **Input Parameters:**
  - `nums`: A vector of integers representing the input array.
- **Returns:** The majority element if it exists, otherwise -1.

## Main Function

- Initializes a sample vector of integers representing the input array.
- Calls the `findMajorityElement` function to find the majority element in the array.
- Prints the majority element if it exists, otherwise prints a message indicating that no majority element was found.

## Example

Suppose we have the input array: `[2, 2, 2, 3, 4, 2, 2]`
Majority Element: 2

## Usage

1. Compile the source code using a C++ compiler.
2. Run the executable.
3. The program will print the majority element in the given array, if it exists.

## Notes

- The majority element is an element that appears more than n/2 times in the array.
- If there is no majority element, the algorithm returns -1.
- The algorithm has a time complexity of O(n) and a space complexity of O(1).

This documentation provides an overview of the code structure, functionality, usage instructions, and example output.
