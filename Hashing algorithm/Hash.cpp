#include <iostream>
#include <vector>
using namespace std;

// Hash function using the division method
int hashFunction(int key, int tableSize) {
    return key % tableSize;
}

int main() {
    // Sample data to be hashed
    vector<int> keys = {12, 34, 56, 78, 90};

    // Size of the hash table
    int tableSize = 10;

    // Create a hash table (array) of size 'tableSize'
    vector<int> hashTable(tableSize, -1);

    // Hash each key and store it in the hash table
    for (int key : keys) {
        int index = hashFunction(key, tableSize);
        hashTable[index] = key;
    }

    // Print the hash table
    cout << "Hash Table:" << endl;
    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1) {
            cout << i << " -> " << hashTable[i] << endl;
        } else {
            cout << i << " -> " << "NULL" << endl;
        }
    }

    return 0;
}
