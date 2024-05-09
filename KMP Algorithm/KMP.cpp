#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to compute the prefix function (also known as the failure function)
vector<int> computePrefixFunction(const string& pattern) {
    int m = pattern.length();
    vector<int> prefix(m, 0);
    int k = 0;
    for (int q = 1; q < m; ++q) {
        while (k > 0 && pattern[k] != pattern[q]) {
            k = prefix[k - 1];
        }
        if (pattern[k] == pattern[q]) {
            k++;
        }
        prefix[q] = k;
    }
    return prefix;
}

// Function to perform string matching using the Knuth-Morris-Pratt (KMP) algorithm
vector<int> kmpSearch(const string& text, const string& pattern) {
    int n = text.length();
    int m = pattern.length();
    vector<int> matches;

    // Compute the prefix function
    vector<int> prefix = computePrefixFunction(pattern);

    int q = 0; // Number of characters matched
    for (int i = 0; i < n; ++i) {
        while (q > 0 && pattern[q] != text[i]) {
            q = prefix[q - 1];
        }
        if (pattern[q] == text[i]) {
            q++;
        }
        if (q == m) {
            matches.push_back(i - m + 1);
            q = prefix[q - 1];
        }
    }

    return matches;
}

int main() {
    string text = "ABABABCABABABCABABABC";
    string pattern = "ABABC";
    
    vector<int> matches = kmpSearch(text, pattern);
    
    if (matches.empty()) {
        cout << "Pattern not found in the text." << endl;
    } else {
        cout << "Pattern found at positions: ";
        for (int i = 0; i < matches.size(); ++i) {
            cout << matches[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
