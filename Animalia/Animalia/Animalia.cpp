#include "Animalia.h"
#include<iostream>

void Human::Think()
{
	std::cout << "(...)\n";
	Speak();
	std::cout << "(What was that?)\n";
}

int Mammal::Speak()
{
	std::cout << "...mellifluous noise...\n";
	return 0;
}

int Animal::Age(int curYear)
{
	//curYear - birthYear == age
	return curYear - birthYear;
}
