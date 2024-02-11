#include "Project.h"
#include <iostream>
#include <fstream>

using namespace std;

//Bank Account Variables
BankAccount::BankAccount()
{
	Savings = 0;
	Checking = 0;
};

//Bank Account Functions
void BankAccount::TransferToSavings() {
	int amount;
	cout << "How much would you like to transfer: ";
	cin >> amount;
	cout << endl;
	if (Checking >= amount) {
		cout << "Transfer Successful!" << endl;
		Checking -= amount;
		Savings += amount;
	}
	else {
		cout << "Insufficient Funds." << endl;
	}
}
void BankAccount::GetChecking() {
	cout << "Your current Checking balance is: ";
	cout << Checking << endl;
}
void BankAccount::GetSavings() {
	cout << "Your current Savings balance is: ";
	cout << Savings << endl;
}
void BankAccount::MakeName(string nam) {
	name = nam;
}
void BankAccount::DepositChecking() {
	int amt;
	cout << "How much would you like to deposit: ";
	cin >> amt;
	cout << endl;
	Checking += amt;
}
void BankAccount::DepositSavings() {
	int amt;
	cout << "How much would you like to deposit: ";
	cin >> amt;
	cout << endl;
	Savings += amt;
}
void BankAccount::Withdraw() {
	int amt;
	cout << "How much would you like to withdraw: ";
	cin >> amt;
	cout << endl;
	if (amt > Checking) {
		cout << "Insufficient Funds." << endl;
	}
	else {
		Checking -= amt;
	}
}
//Menu
void Menu::StartScreen() {
	cout << "Please Enter The Account Holders Name: ";
	cin >> nama;
	MakeName(nama);
	SelectMenu();
}
void Menu::SelectMenu(){
	int num;
	cout << endl << "Welcome " << nama << endl;
	cout << "Select an option." << endl;
	cout << endl;
	cout << "\t 1. Checking" << endl;
	cout << "\t 2. Savings" << endl;
	cout << "\t 3. Select Another Account" << endl;
	cin >> num;
	switch (num) {
	case 1: {
		system("cls");
		CheckingMenu();
		break;
	}
	case 2: {
		system("cls");
		SavingsMenu();
		break;
	}
	case 3: {
		StartScreen();
		break;
	}
	}
}
void Menu::CheckingMenu() {
	int num;
	cout << "Select an option" << endl;
	cout << "\t 1. Balance" << endl;
	cout << "\t 2. Deposit" << endl;
	cout << "\t 3. Withdraw" << endl;
	cout << "\t 4. Transfer To Savings" << endl;
	cout << "\t 5. Select Account" << endl;
	cin >> num;
	switch (num) {
	case 1: {
		GetChecking();
		break;
	}
	case 2: {
		DepositChecking();
		break;
	}
	case 3: {
		WithdrawChecking();
		break;
	}
	case 4: {
		TransferToSavings();
	}
	case 5: {
		SelectMenu();
		break;
	}
	}
}
void Menu::SavingsMenu() {
	int num;
	cout << "Select An Option: " << endl;
	cout << "\t 1. Balance" << endl;
	cout << "\t 1. Deposit" << endl;
	cout << "\t 3. Withdraw" << endl;
	cout << "\t 4. Select Account" << endl;
	cin >> num;
	switch (num) {

	}
}


