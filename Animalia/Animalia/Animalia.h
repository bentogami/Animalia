#ifndef ANIMALIA_H
#define ANIMALIA_H
#include <string>

/*
The classes Animal and Mammal have already been made for you by another team. Your mission, should you choose to
accept it, is to extend Animal meaningfully by creating another subtype in addition to Mammal, one of them mythological.

When you're done with that, go another round by extending Mammal to include two other mammals, one of them human and the
other non-human.

Human should have powers of speech and thought, represented by class methods that do something entertaining.

Humans must think before speaking, but do not have to think very well, depending on the type of human you are trying
to simulate.

Your non-human type can have powers of speech, but do not have to have powers of thought.

Kudos, and possibly more, for entertaining Matt.
*/

enum Sex {MALE, FEMALE, HERM};
enum HairType {BALD, NORMAL, EXTREME};
enum Color {RED, GREEN, BLUE, ORANGE, BLACK, PINK};

//Animal
class Animal
{
private:
	Sex sex;
	int birthYear;
public:
	Animal(Sex s, int year) : sex(s), birthYear(year) { }
	int Age(int);
};

//Mammal
class Mammal : public Animal
{
private:
	HairType hair;
public:
	Mammal(Sex s, int year) : Animal(s,year), hair(NORMAL) { } // Default hairtype is normal
	Mammal(Sex s, int year, HairType h) : Animal(s,year), hair(h) { } // Otherwise, let them set the hairtype
	virtual void Speak(std::string text) = 0;	
};

//Boring Human
class Human : public Mammal
{
private:

public:
	Human(Sex s, int year): Mammal(s, year, NORMAL) { } //Average, and puny, human
	Human(Sex s, int year, HairType h) : Mammal(s, year, h) { } //Human with strange hair
	void Think();
	void Speak(std::string text);
};

//Mythological Creature
class Kobold : public Animal
{
private:
	Color color;
public:
	Kobold(Sex s, int year) : Animal(s, year), color(GREEN) { } //Default color is green, the most common of kobold colors
	Kobold(Sex s, int year, Color c) : Animal(s, year), color(c) { } //Else, set your special color kobold
};

#endif