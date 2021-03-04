#include <iostream>
#include "portfolio.h"
#include "account.h"


int main() {

	portfolio livePortfolio;

	while (1) {
		std::cout << "\n\n1 - Zero the savings account...\n2 - Zero the cheque account...\n3 - Deposit to savings...\n4 - Deposit to cheque...\n5 - Withdraw from savings...\n6 - Withdraw from cheque...\n7 - Print savings balance...\n8 - Print cheque balance...\nSelect an option $ ";
		int command;
		double withdraw;
		double deposit;
		std::cin >> command;
		switch (command) {
			case 1:
				livePortfolio.savings_zero();
				break;
			case 2:
				livePortfolio.cheque_zero();
				break;
			case 3:
				std::cout << "Amount to depost? $ ";
				std::cin >> deposit;
				livePortfolio.savings_deposit(deposit);
				break;
			case 4:
				std::cout << "Amount to depost? $ ";
				std::cin >> deposit;
				livePortfolio.cheque_deposit(deposit);
				break;
			case 5:
				std::cout << "Amount to withdraw? $ ";
				std::cin >> withdraw;
				livePortfolio.savings_withdraw(withdraw);
				break;
			case 6:
				std::cout << "Amount to withdraw? $ ";
				std::cin >> withdraw;
				livePortfolio.cheque_withdraw(withdraw);
				break;
			case 7:
				std::cout << "$" << livePortfolio.savings_balance() << std::endl;
				break;
			case 8:
				std::cout << "$" << livePortfolio.cheque_balance() << std::endl;
				break;
		}
	}
}