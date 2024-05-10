#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct BankAccount{
	string accountNumber;
	string accountType;
	double balance;
};
//Global vector to store bank accounts(simulate database)
vector<BankAccount>accounts;
//Function prototypes
void loadAccountsFromFile();
void saveAccountsToFile();
void displayMenu();
void createAccount();
void deposit();
void withdraw();
void displayAllAccounts();

int main(){
	loadAccountsFromFile();
	//load existing accounts from file
	char choice;
	do{
		displayMenu();
		cout<<"Enter your choice:";
		cin>>choice;
		switch(choice){
			case '1':
				createAccount();
				break;
			case '2':
				deposit();
				break;
			case '3':
				withdraw();
				break;
			case '4':
				displayAllAccounts();
				break;
			case '5':
				cout<<"Exiting program.\n";
				break;
			default:
				cout<<"Invaild choice. please try again.\n";
		}
	}while(choice!='5');
	saveAccountsToFile();
	//Save account data to file before exiting
}
void loadAccountsFromFile(){
	ifstream infile("accounts.csv");
	if(infile.is_open()){
		string line;
		while(getline(infile,line)){
			stringstream ss(line);
			BankAccount account;
			getline(ss,account.accountNumber,',');
			getline(ss,account.accountType,',');
			ss>>account.balance;
			accounts.push_back(account);
		}
		infile.close();
	}
	
}
void saveAccountsToFile(){
	ofstream outfile("accounts.csv");
	if(outfile.is_open()){
		for(const auto& account:accounts){
			outfile<<account.accountNumber<<","
			<<account.accountType<<","
			<<account.balance<<"\n";
		}
		outfile.close();
	}
}
void displayMenu(){
	cout<<"\nMenu\n";
	cout<<"1.Create Account\n";
	cout<<"2.Deposit\n";
	cout<<"3.Withdraw\n";
	cout<<"4.Display All Accounts\n";
	cout<<"5.Exit\n";
}
void createAccount(){
	BankAccount account;
	cout<<"Enter account number: ";
	cin>>account.accountNumber;
	cout<<"Enter account type: ";
	cin>>account.accountType;
	cout<<"Enter initial balance: ";
	cin>>account.balance;
	accounts.push_back(account);
	cout<<"Account created successfully.\n";
}
void deposit(){
	string accountNumber;
	double amount;
	cout<<"Enter account number: ";
	cin>>accountNumber;
	auto it= find_if(accounts.begin(),accounts.end(),[&accountNumber](const BankAccount& acc){
		return acc.accountNumber==accountNumber;
	});
	if(it!=accounts.end()){
		cout<<"Enter deposit amount: ";
		cin>>amount;
		it->balance+=amount;
		cout<<"Deposit successful.\n New balance:\n "<<it->balance<<"\n";
	}
	else{
		cout<<"Account not found.\n";
	}
}
void displayAllAccounts(){
	if(accounts.empty()){
		cout<<"No accounts found.\n";
	}
	else{
		cout<<"All Accounts:\n";
		for(const auto& account:accounts){
			cout<<"Account Number: "<<account.accountNumber<<", Type:"
			<<account.accountType<<",Balance: "<<account.balance<<"\n";
		}
	}
}
void withdraw(){
	string accountNumber;
	double amount;
	cout<<"Enter account number: ";
	cin>>accountNumber;
	auto it= find_if(accounts.begin(),accounts.end(),[&accountNumber](const BankAccount& acc){
		return acc.accountNumber==accountNumber;
	});
	if(it!=accounts.end()){
		cout<<"Enter withdrawal amount: ";
		cin>>amount;
		if(it->balance >= amount){
			it->balance-=amount;
			cout<<"WIthdrawal successful.\n New balance:\n"<<
			it->balance<<"\n";
		}
		else{
			cout<<"Insufficient funds.\n";
		}
		
	}else{
		cout<<"Account not found.\n";
	}
	
}