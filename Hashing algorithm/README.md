# Hashing Algorithm Implementation in C++

## Introduction

Hashing is a technique used to map data of arbitrary size to fixed-size values. It is commonly used in data structures like hash tables to efficiently store and retrieve data. This implementation demonstrates a basic hashing algorithm using the division method.

## Functions

### hashFunction Function

- **Description:** Computes the hash value for a given key using the division method.
- **Input Parameters:**
  - `key`: The key to be hashed.
  - `tableSize`: The size of the hash table.
- **Returns:** The hash value (index) where the key should be stored in the hash table.

## Main Function

- Initializes a sample vector of integers representing the keys to be hashed.
- Specifies the size of the hash table.
- Creates a hash table (array) of size 'tableSize'.
- Hashes each key using the `hashFunction` and stores it in the hash table.
- Prints the hash table, showing the mapping of keys to their corresponding hash values.

## Example

Suppose we have the keys: `[12, 34, 56, 78, 90]` and a hash table size of 10. After hashing, the hash table will look like this:
Hash Table:
0 -> NULL
1 -> NULL
2 -> NULL
3 -> NULL
4 -> NULL
5 -> 56
6 -> NULL
7 -> 78
8 -> NULL
9 -> 90

## Usage

1. Compile the source code using a C++ compiler.
2. Run the executable.
3. The program will print the hash table, showing the mapping of keys to their hash values.

## Notes

- The division method is a simple hash function that computes the remainder of dividing the key by the table size.
- This implementation uses a basic hash table with linear probing collision resolution.
- Hashing is a fundamental technique used in various data structures and algorithms for efficient storage and retrieval of data.

This documentation provides an overview of the code structure, functionality, usage instructions, and example output.
