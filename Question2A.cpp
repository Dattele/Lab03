/*
 * This is the code for Question 2A
 * Author: Logan Baumberger
 * Last Modified: 9/10/21 3:14 PM
 */

#include <iostream>
#include <string>

int main() {
	std::string account = "21_CSE_c++_Fall";
	std::string password = "278A&B";
	bool condition = true;

	while (condition) {	

		std::string user_account;
		std::string user_password;
		std::cout << "Enter account: ";
		std::cin >> user_account;
		std::cout << "Enter password: ";
		std:: cin >> user_password;

		if (account.compare(user_account) == 0
		       	&& password.compare(user_password) == 0) {
				std::cout << "login success" << std::endl;
				condition = false;
		}
		else {
			std::cout << " Login failed" << std::endl;
		}
	}

	return 0;
}

		

