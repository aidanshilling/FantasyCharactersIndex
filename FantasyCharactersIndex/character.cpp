#include <iostream>
#include <string>
#include <ctime>
#include "character.h"

void ctr::character::getStats(int index_value)
{
	id = index_value;
	std::cout << "Enter name (string):" << std::endl;
	std::cin.ignore();
	std::getline(std::cin, name);
	std::cout << "Enter age (int):" << std::endl;
	std::cin >> age;
	std::cout << "Enter iq (int):" << std::endl;
	std::cin >> iq;
	std::cout << "Enter gender (m/f):" << std::endl;
	std::cin >> gender;
}

void ctr::character::printStats()
{
	std::string gender_string;
	std::cout << "\n-----------------------------\n\n";
	std::cout << "Name: " + name << std::endl;
	std::cout << "ID: " + std::to_string(id) << std::endl;
	std::cout << "Age: " + std::to_string(age) << std::endl;
	std::cout << "IQ: " + std::to_string(iq) << std::endl;
	if (gender == 'm')
	{
		gender_string = "Male";
	}
	else if (gender == 'f')
	{
		gender_string = "Female";
	}
	else
	{
		gender_string = "Other";
	}
	std::cout << "Gender: " + gender_string << std::endl;
}
