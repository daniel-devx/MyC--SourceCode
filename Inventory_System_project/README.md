# Inventory Management System Documentation

## Introduction

This Inventory Management System is designed to manage products in an inventory. It allows users to perform operations such as adding, updating, deleting, searching, and displaying products.

## Classes and Functions

### Product Struct

- **Attributes:**
  - `id`: Product ID
  - `name`: Product name
  - `description`: Product description
  - `quantity`: Product quantity
  - `price`: Product price

### Inventory Class

- **Attributes:**

  - `products`: Vector of Product objects representing the inventory.

- **Public Methods:**

  - `void addProducts(const Product& product)`: Adds a new product to the inventory.
  - `void updateProduct(const string& id, const Product& updatedProducts)`: Updates an existing product in the inventory.
  - `void deleteProducts(const string& id)`: Deletes a product from the inventory.
  - `void searchProduct(const string& id)`: Searches for a product in the inventory by ID.
  - `void displayAllProducts()`: Displays all products in the inventory.

- **Private Methods:**
  - `void displayProduct(const Product& product)`: Displays details of a single product.

## Main Function

- This function is the entry point of the program.
- It initializes an `Inventory` object.
- It presents a menu to the user allowing them to choose from various operations.
- Based on the user's choice, it performs the corresponding operation using methods of the `Inventory` class.

## Operations

1. **Add Product**: Allows the user to add a new product to the inventory.
2. **Update Product**: Allows the user to update an existing product in the inventory.
3. **Delete Product**: Allows the user to delete a product from the inventory.
4. **Search Product**: Allows the user to search for a product by ID in the inventory.
5. **Display All Products**: Displays details of all products in the inventory.
6. **Exit**: Exits the program.

## Requirements

- C++ compiler supporting C++11 or later.

## Usage

1. Compile the source code using a C++ compiler.
2. Run the executable.
3. Follow the menu prompts to perform various operations on the inventory.
4. Choose the "Exit" option to terminate the program.

## Example

Add Product
Update Product
Delete Product
Search Product
Display All Products
Exit
Enter your choice: 1
Enter product ID: 101
Enter product name: Laptop
Enter product description: High-performance laptop
Enter quantity: 10
Enter price: $999
Product added successfully

## Notes

- Product ID must be unique.
- Price is in dollars.
- The program runs in a loop until the user chooses to exit.
