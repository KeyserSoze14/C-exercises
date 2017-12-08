#include <iostream>
using namespace std;
class Account{
	public:
		Account(double balance);
		~Account();
		void getBalance();
		double credit(double value);
		double debit(double withdrawal);
	private:
		double initial_balance;
		double grandtotal;
};
Account::Account(double balance){
	if(balance >= 0){
		cout << "Valid\n";
		initial_balance = balance;
		grandtotal = initial_balance;
	}
	else{
		initial_balance = 0;
		grandtotal = initial_balance;
		cout << "Invalid balance provided\n";
	}
}
double Account::credit(double value){
	grandtotal = value+initial_balance;
	cout << "The total remaining balance is: " << value+initial_balance <<endl;
	}
double Account::debit(double withdrawal){
	if(initial_balance - withdrawal < 0){
		cout << "Debit amount exceeds available balance\n";
	}
	else{
		initial_balance -= withdrawal;
		grandtotal = initial_balance;
	}
}
void Account ::getBalance(){
	cout << grandtotal;
}
Account::~Account(){
}

main(){
	double init_balance;
	double debit_amount, credit_amount;
	cout << "Balance in bank account? : ";
	cin >> init_balance;
	Account Account1(init_balance);
	cout << "Available balance is : "; 
	Account1.getBalance();
	cout << "\nHow much would you like to withdraw? : ";
	cin >> debit_amount;
	Account1.debit(debit_amount);
	cout << "How much to be deposited? : ";
	cin >> credit_amount;
	Account1.credit(credit_amount);
	return 0;
}
