/*
 * This is the code for Question 1A
 * Author: Logan Baumberger
 * Last Modified: 9/10/21 2:50 PM:
 */

#include <iostream>

int main() {
	int width;
	int height;

	std::cout << "Please enter width ";
	std::cin >> width;
	std::cout << "Please enter height: ";
	std::cin >> height;

	int perimeter = (width * 2) + (height * 2);
	int area = width * height;

	std::cout << "Perimeter = " << perimeter << std::endl;
	std::cout << "Area = " << area << std::endl;

	return 0;
}
