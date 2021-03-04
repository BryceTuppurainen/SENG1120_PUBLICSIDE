#ifndef PORTFOLIO_INCLUDED
#define PORTFOLIO_INCLUDED

#include "account.h"

class portfolio {
public:
	void savings_zero();
	void cheque_zero();
	void savings_deposit(double deposit);
	void savings_withdraw(double withdraw);
	void cheque_deposit(double deposit);
	void cheque_withdraw(double withdraw);
	double savings_balance();
	double cheque_balance();
private:
	account savings;
	account cheque;
};

#endif