#pragma once
#include <string>

struct Person {
	std::string name;
	int age{};
	std::string job;
};

void print_person(const Person& P);