# Knuth-Morris-Pratt (KMP) Algorithm Implementation in C++

## Introduction

This code provides an implementation of the Knuth-Morris-Pratt (KMP) algorithm in C++. The KMP algorithm efficiently searches for occurrences of a pattern within a given text by utilizing the concept of prefix function or failure function.

## Implementation Details

The code is implemented in C++ and demonstrates how to perform string matching using the KMP algorithm.

## Code Explanation

1. **Header Files**: The code includes necessary header files such as `<iostream>`, `<vector>`, and `<string>`.

2. **Function: computePrefixFunction**:

   - This function computes the prefix function (failure function) of the pattern.
   - It iterates through the pattern to determine the length of the longest proper prefix that is also a suffix for each prefix.

3. **Function: kmpSearch**:

   - This function performs string matching using the KMP algorithm.
   - It utilizes the prefix function computed for the pattern to efficiently search for occurrences of the pattern within the text.

4. **Main Function**:
   - Initializes the text and pattern strings.
   - Calls the `kmpSearch` function to search for the pattern within the text.
   - Prints the positions of occurrences of the pattern in the text if any.

## Example Output

Pattern found at positions: 0 6 12

## Conclusion

This code demonstrates how to efficiently perform string matching using the Knuth-Morris-Pratt (KMP) algorithm in C++. It provides a clear example of how to implement and utilize this algorithm in solving string-related problems, particularly in scenarios where efficient substring search is required.
