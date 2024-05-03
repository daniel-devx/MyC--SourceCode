#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


struct Product{
	string id;
	string name;
	string description;
	int quantity;
	double price;
};

class Inventory{
	private:
		vector<Product> products;
	public:
		void addProducts(const Product& product){
			products.push_back(product);
		}
		void updateProduct(const string& id,const Product& updatedProducts){
			auto it= find_if(products.begin(),products.end(),[&id](const Product& p){
				return p.id==id;
			});
			if(it !=products.end()){
				*it;
				cout<<"Product updated successfully.\n";
			}
			else{
				cout<<"Product not found.\n";
			}
		}
		void deleteProducts(const string& id){
			auto it= find_if(products.begin(),products.end(),[&id](const Product& p){
				return p.id==id;
			});
			if(it!= products.end()){
				products.erase(it);
				cout<<"Product deleted successfully.\n";
			}
			else{
				cout<<"product not found.\n";
			}
		}
		void searchProduct(const string& id){
			auto it= find_if(products.begin(),products.end(),[&id](const Product& p){
				return p.id==id;
			});
			if(it != products.end()){
				displayProduct(*it);
			}
			else{
				cout<<"Product not found.\n";
			}
		}
		void displayAllProducts(){
			if(products.empty()){
				cout<<"Inventory is empty.\n";
			}
			else{
			cout<<"Inventory:\n"<<endl;
			for(const auto& product:products){
				displayProduct(product);
			}
			}
		}
		private:
			void displayProduct(const Product& product){
				cout<<"***********************"<<endl;
				cout<<"ID:"<<product.id<<"\n";
				cout<<"Name:"<<product.name<<"\n";
				cout<<"Description:"<<product.description<<"\n";
				cout<<"Quantity:"<<product.quantity<<"\n";
				cout<<"Price:$"<<product.price<<"\n";
				cout<<"***********************"<<endl;
			}
		
};

//void searchProducts();
//void displayAllProducts();
//void displayProducts();
int main(){
	Inventory inventory;
	char choice;
	do{
		cout<<"Menu:\n";
		cout<<"1. Add Product\n";
		cout<<"2. Update Product\n";
		cout<<"3. Delete Product\n";
		cout<<"4. Search Product\n";
		cout<<"5. Display All Products\n";
		cout<<"6.Exit\n";
		cout<<"Enter your choice:";
		cin>>choice;
		switch(choice){
			case '1':{
				Product product;
				cout<<endl;
				cout<<"***********************"<<endl;
				cout<<"Enter product ID: ";
				cin>>product.id;
				cout<<"Enter product name: ";
				cin.ignore();
				getline(cin, product.name);
				cout<<"Enter product description:"; 
				getline(cin,product.description);
				cout<<"Enter quantity:";
				cin>>product.quantity;
				cout<<"Enter price: $";
				cin>>product.price;
				inventory.addProducts(product);
				cout<<"***********************"<<endl;
				break;
			}
			case '2':{
				cout<<endl;
				cout<<"***********************"<<endl;
				string id;
				cout<<"Enter product ID to update";
				cin>>id;
				Product updatedProduct;
				cout<<"Enter new product name :";
				cin.ignore();
				getline(cin,updatedProduct.name);
				cout<<"Enter new product description:";
				getline(cin,updatedProduct.description);
				cout<<"Enter new quantity: ";
				cin>>updatedProduct.quantity;
				cout<<"Enter new price: $";
				cin>>updatedProduct.price;
				inventory.updateProduct(id,updatedProduct);
				cout<<"***********************"<<endl;
				break;
			}
			case '3':{
				cout<<endl;
				cout<<"***********************"<<endl;
				string id;
				cout<<"Enter product ID to delete:";
				cin>>id;
				inventory.deleteProducts(id);
				cout<<"***********************"<<endl;
				break;
			}
			case '4':{
				cout<<"***********************"<<endl;
				string id;
				cout<<"Enter product ID to search:";
				cin>>id;
				inventory.searchProduct(id);
				cout<<"***********************"<<endl;
				break;
			}
			case '5':{
				cout<<endl;
				inventory.displayAllProducts();
				break;
			}
			case '6':
				cout<<"Exiting program.\n";
				break;
			default:
				cout<<"Invalid choice. please try again.\n";
		}
	}while(choice!='6');
	return 0;
}
