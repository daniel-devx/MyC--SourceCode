\*Password Strength Checker: Create a tool to assess the strength of passwords based on military-grade criteria.
\*Password Strength Checker: Create a tool to assess the strength of passwords based on military-grade criteria.

# Password Assessment Tool Documentation

## Introduction

This Password Assessment Tool is designed to evaluate the strength of a given password based on various criteria such as length, presence of uppercase and lowercase letters, digits, and special characters.

## Classes and Functions

### PasswordAssessmentTool Class

- **Public Methods:**
  - `void assessPassword(const std::string& str)`: Performs the assessment of the password passed as a parameter.
- **Private Methods:**
  - `bool containsUppercase(const std::string& str)`: Checks if the password contains at least one uppercase letter.
  - `bool containsLowercase(const std::string& str)`: Checks if the password contains at least one lowercase letter.
  - `bool containsDigit(const std::string& str)`: Checks if the password contains at least one digit.
  - `bool containsSpecialCharacter(const std::string& str)`: Checks if the password contains at least one special character.

### main Function

- This function is the entry point of the program.
- It initializes a `PasswordAssessmentTool` object and prompts the user to input a password character by character.
- Password input is masked with asterisks for security.
- After receiving the complete password, it assesses the password using the `assessPassword` method of the `PasswordAssessmentTool` object.
- If the password meets the requirements, it prints "Password meets the requirements." Otherwise, it catches and handles the `std::invalid_argument` exception and prints "Password does not meet the requirements: [exception message]".

## Requirements

- C++ compiler supporting C++11 or later.
- `conio.h` library for handling console input/output.

## Usage

1. Compile the source code using a C++ compiler.
2. Run the executable.
3. Enter the password when prompted.
4. The tool will assess the password and provide feedback.

## Example

## Notes

- The minimum length requirement for the password is set to 8 characters by default.
- Special characters are defined as non-alphanumeric characters.
