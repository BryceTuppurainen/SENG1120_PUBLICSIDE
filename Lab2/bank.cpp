// This program creates an instance of a simple account object and
// performs some operations on it
// Programmer:  Alex Mendes
// Last modified:  01 Aug 2016
// This file should be used in conjunction with Lab 1 for SENG1120

#include <iostream>
#include <cstdlib>
#include "account.h"

account* compareAccPtr(account* inputAccount_1, account* inputAccount_2) {
	if (inputAccount_1->balance() > inputAccount_2->balance()) {
		return inputAccount_1;
	} else {
		return inputAccount_2;
	}
}

using namespace std;

int main() {

	account *ptr = new account();
	
    cout << "Creating first account with initial amount 10" << endl;

    ptr->deposit(10);
    
	if (ptr->has_funds()) {
        cout << "Balance is " << ptr->balance() << endl;
        cout << "Deposit 100" << endl;
        ptr->deposit(100);
        cout << "Balance is " << ptr->balance() << endl;
        cout << "Withdraw 75" << endl;
        ptr->withdraw(75);
        cout << "Balance is " << ptr->balance() << endl;
    } else {
        cout << "Account is empty" << endl;
    }


	cout << "Creating second account with initial amount 0" << endl;
	account my_account2;
	my_account2.deposit(0);
	if (my_account2.has_funds()) {
		cout << "Balance is " << my_account2.balance() << endl;
		cout << "Deposit 200" << endl;
		my_account2.deposit(200);
		cout << "Balance is " << my_account2.balance() << endl;
		cout << "Withdraw 140" << endl;
		my_account2.withdraw(140);
		cout << "Balance is " << my_account2.balance() << endl;
	} else {
		cout << "Account is empty" << endl;
	}

	account my_copy = my_account2; // Copying account 2 as I've replaced account 1 with a pointer
	my_copy.deposit(111111);
	cout << my_copy.balance() << endl;
	cout << my_account2.balance() << endl;

	account& acct2 = *ptr;
	acct2.deposit(1000000); //Deposit, one miiiiiilion dollars!
	cout << acct2.balance() << endl;

	account* secondPtr = new account();

	cout << "The higher value of the accounts is " << compareAccPtr(secondPtr, ptr)->balance() << endl;

	return EXIT_SUCCESS;
}
