#include "portfolio.h"

void portfolio::savings_zero() {
	savings.clear();
}

void portfolio::cheque_zero() {
	cheque.clear();
}

void portfolio::savings_deposit(double deposit) {
	savings.deposit(deposit);
}

void portfolio::savings_withdraw(double withdraw) {
	savings.withdraw(withdraw);
}

void portfolio::cheque_deposit(double deposit) {
	cheque.deposit(deposit);
}

void portfolio::cheque_withdraw(double withdraw) {
	cheque.withdraw(withdraw);
}

double portfolio::savings_balance() {
	return savings.balance();
}

double portfolio::cheque_balance() {
	return cheque.balance();
}