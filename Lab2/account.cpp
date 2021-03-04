// This implements a class that represents an
// account object for double numbers of a currency.
// Programmer: Alex Mendes Editor: Bryce Tuppurainen

#include "account.h"

account::account(double initialValue)
{
    acc_balance = initialValue;
}

void account::deposit(double amount)
{
    acc_balance += amount;
}

void account::withdraw(double amount)
{
    acc_balance -= amount;
}

void account::clear()
{
	acc_balance = 0;
}

double account::balance() const
{
    return acc_balance;
}

bool account::has_funds() const
{
	if (acc_balance > 0.0) {return true;} else {return false;}
}
