# Bank Account Management System

This program implements a simple bank account management system in C++. It allows users to perform various operations such as creating accounts, depositing money, withdrawing money, and displaying all accounts.

## Table of Contents

- [Introduction](#introduction)
- [Data Structures and Global Variables](#data-structures-and-global-variables)
- [Function Prototypes](#function-prototypes)
- [Main Function](#main-function)
- [Function Implementations](#function-implementations)
  - [loadAccountsFromFile](#loadaccountsfromfile)
  - [saveAccountsToFile](#saveaccountstofile)
  - [displayMenu](#displaymenu)
  - [createAccount](#createaccount)
  - [deposit](#deposit)
  - [withdraw](#withdraw)
  - [displayAllAccounts](#displayallaccounts)

## Introduction

The bank account management system allows users to perform the following operations:

- Create a new account
- Deposit money into an existing account
- Withdraw money from an existing account
- Display all existing accounts

## Data Structures and Global Variables

- `struct BankAccount`: Defines the structure of a bank account, including `accountNumber`, `accountType`, and `balance`.
- `vector<BankAccount> accounts`: Global vector to store bank accounts, simulating a database.

## Function Prototypes

- `loadAccountsFromFile()`: Loads existing accounts from a file (`accounts.csv`).
- `saveAccountsToFile()`: Saves account data to a file (`accounts.csv`).
- `displayMenu()`: Displays the menu options for the user.
- `createAccount()`: Creates a new bank account.
- `deposit()`: Deposits money into an existing account.
- `withdraw()`: Withdraws money from an existing account.
- `displayAllAccounts()`: Displays all existing accounts.

## Main Function

The `main()` function loads existing accounts, displays the menu, and performs operations based on user input. It saves account data to a file before exiting.

## Function Implementations

### loadAccountsFromFile

This function reads account data from a CSV file and populates the `accounts` vector.

### saveAccountsToFile

This function writes account data from the `accounts` vector to a CSV file.

### displayMenu

This function displays the menu options for the user to choose from.

### createAccount

This function allows the user to create a new bank account by providing account number, account type, and initial balance.

### deposit

This function allows the user to deposit money into an existing account by providing the account number and deposit amount.

### withdraw

This function allows the user to withdraw money from an existing account by providing the account number and withdrawal amount.

### displayAllAccounts

This function displays all existing accounts along with their account number, type, and balance.
