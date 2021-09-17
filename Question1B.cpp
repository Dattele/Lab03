/*
 * This is the code for Question 1B
 * Author: Logan Baumberger
 * Last Modified: 9/10/21 2:58 PM
 */

#include <iostream>
#include <cmath>

int main() {
	int radius;

	std::cout << "Please enter radius: ";
	std::cin >> radius;
	
	double perimeter = 2 * M_PI * radius;
	double area  = M_PI * radius * radius;

	std::cout << "Perimeter = " << perimeter << std::endl;
	std::cout << "Area = " << area << std::endl;

	return 0;
}

