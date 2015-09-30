#include "Animalia.h"
#include <iostream>
#include <string>

void Human::Speak(std::string text)
{
	std::cout << text << '\n';
}

void Human::Think()
{
	std::cout << "(What should I say..?)\n";
	Speak("I hope pass.");
	std::cout << "(...Dang, I'm good.)\n";
}

int Animal::Age(int curYear)
{
	//curYear - birthYear == age
	return curYear - birthYear;
}
