/*
 * This is the code for Question 3
 * Author: Logan Baumberger
 * Last Modified: 9/16/21 10:55 PM
 */

#include <iostream>

int main() {
	int length;
	std::cout << "Enter array length(< 20): ";
	std::cin >> length;

	int numbers[length];

	for (int i = 0; i < length; i++) {
		std::cout << "Enter positive array element as integer (< 65535): ";
		std::cin >> numbers[i];
	}

	std::cout << "Length of array: " << length << std::endl;

	int max = 0;
	int min = 65535;
	for (int i = 0; i < length; i++) {
		if (numbers[i] < min)
			min = numbers[i];
		if (numbers[i] > max)
			max = numbers[i];
	}
	std::cout << "Max number: " << max << std::endl;
	std::cout << "Min number: " << min << std::endl;

	//Finding the median number
	double median;

	//Sorting the array from smallest to largest
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			if (numbers[i] > numbers[j]) {
				int tmp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = tmp;
			}
		}
	}

	//If length is an odd number
	if (length % 2 != 0) {
		median = numbers[length / 2];
	} else { //If length is an even number
		median = (numbers[(length / 2) - 1] + numbers[length / 2]) / 2.0;
	}

	std::cout << "Median number: " << median << std::endl;

	return 0;
}
