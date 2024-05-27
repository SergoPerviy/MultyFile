#include <iostream>
#include "Functions.h"
#include "Structers.hpp"
#include "Data.hpp"

int main() {
	setlocale(LC_ALL, "Russian");

	say_hi();

	std::cout << new_str(4, '!') << std::endl;

	const int size = 4;
	int arr[size]{ 1, 2, 3, 4 };
	print_arr(arr, size);

	Person p1{ "Bob", 33, "Gay" };
	print_person(p1);

	_A = 7;
	std::cout << "A = " << _A << std::endl;
	std::cout << "PI = " << _PI << std::endl;
	print_arr(_ARR, _SIZE);

	return 0;
}