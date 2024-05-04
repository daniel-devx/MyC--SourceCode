# Two Pointers Algorithm in C++

## Introduction

This code provides an implementation of the Two Pointers algorithm in C++. The Two Pointers algorithm is a technique used to solve problems that involve searching or iterating over arrays or sequences.

## Implementation Details

The code is implemented in C++ and demonstrates how to find pairs of elements in a sorted array that sum up to a given target.

## Code Explanation

1. **Header Files**: The code includes necessary header files such as `<iostream>` and `<vector>`.

2. **Namespace**: The code utilizes the `std` namespace for convenience.

3. **Function: findPairs**:

   - This function takes a sorted vector `arr` and an integer `target` as input parameters.
   - It initializes two pointers, `left` and `right`, pointing to the beginning and the end of the array respectively.
   - The function iterates through the array until the `left` pointer is less than the `right` pointer.
   - At each iteration, it calculates the sum of elements pointed by `left` and `right` pointers.
   - If the sum equals the target, it prints the pair and increments `left` and decrements `right`.
   - If the sum is less than the target, it increments `left`.
   - If the sum is greater than the target, it decrements `right`.

4. **Main Function**:
   - Initializes a sorted vector `arr` and an integer `target`.
   - Calls the `findPairs` function with `arr` and `target`.
   - Prints pairs found that sum up to the given target.

## Example Output

Pairs that sum up to 9:
Pair found: (2, 7)
Pair found: (3, 6)
Pair found: (4, 5)

## Conclusion

This code demonstrates how to efficiently find pairs of elements in a sorted array using the Two Pointers algorithm. It provides a clear example of how to implement and utilize this algorithm in solving array-related problems.
