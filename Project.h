#include <iostream>
#include <string>

using namespace std;

class BankAccount {
public:
	BankAccount();
	void GetChecking();
	void GetSavings();
	void WithdrawChecking();
	void WithdrawSavings();
	void DepositChecking();
	void TransferToSavings();
	void DepositSavings();
	void MakeName(string name);
private:
	std::string name;
	int Checking;
	int Savings;
};
class Menu:public BankAccount {
public:
	string nama;
	void StartScreen();
	void CheckingMenu();
	void SavingsMenu();
	void SelectMenu();
};