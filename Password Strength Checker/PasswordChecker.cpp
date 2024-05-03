#include <iostream>
#include <string>
#include <cctype>
#include <conio.h>
#include <cstdlib> // For _getch()

using std::cin;
using std::cout;
using std::string;
using std::endl;

class PasswordAssessmentTool {
public:
    void assessPassword(const std::string& str) {
        std::cout << "Password Strength Assessment:\n";

        if (str.length() < MIN_LENGTH) {
            std::cout << "Minimum length requirement not met (minimum " << MIN_LENGTH << " characters).\n";
            throw std::invalid_argument("Password length requirement not met.");
        } else {
            std::cout << "Minimum length requirement met.\n";
        }

        if (containsUppercase(str)) {
            std::cout << "Presence of uppercase letters: Yes\n";
        } else {
            std::cout << "Presence of uppercase letters: No\n";
        }

        if (containsLowercase(str)) {
            std::cout << "Presence of lowercase letters: Yes\n";
        } else {
            std::cout << "Presence of lowercase letters: No\n";
        }

        if (containsDigit(str)) {
            std::cout << "Presence of digits: Yes\n";
        } else {
            std::cout << "Presence of digits: No\n";
        }

        if (containsSpecialCharacter(str)) {
            std::cout << "Presence of special characters: Yes\n";
        } else {
            std::cout << "Presence of special characters: No\n";
        }
    }

private:
    static const int MIN_LENGTH = 8;

    bool containsUppercase(const std::string& str) {
        for (char ch : str) {
            if (std::isupper(ch))
                return true;
        }
        return false;
    }

    bool containsLowercase(const std::string& str) {
        for (char ch : str) {
            if (std::islower(ch))
                return true;
        }
        return false;
    }

    bool containsDigit(const std::string& str) {
        for (char ch : str) {
            if (std::isdigit(ch))
                return true;
        }
        return false;
    }

    bool containsSpecialCharacter(const std::string& str) {
        for (char ch : str) {
            if (!std::isalnum(ch))
                return true;
        }
        return false;
    }
};

int main() {
    PasswordAssessmentTool tool;
    string str;
    char ch;

    std::cout << "Enter your password: ";

    // Input password character by character and handle backspace
    while ((ch = _getch()) != '\r') {
        if (ch == '\b') { // If backspace is pressed
            if (!str.empty()) {
                str.pop_back(); // Remove the last character from the password string
                cout << "\b \b"; // Erase the last asterisk from the console
            }
        } else {
            str.push_back(ch); // Add character to the password string
            cout << '*'; // Print asterisk
        }
    }
    cout << endl;
    while (_kbhit()) // While there are characters in the input buffer
        _getch(); 

    try {
	
        tool.assessPassword(str);
        cout << "Password meets the requirements." << endl;
    } catch (const std::invalid_argument& e) {
        cout << "Password does not meet the requirements: " << e.what() << endl;
    }
    system("pause");

    return 0;
}
