/*******
* Author: Anthony Mazzola
* Email: mazzolaa@oregonstate.edu
* Date: 12/10/2019
* Description: Header file for Character class.
***/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include "space.hpp"

class Space;

class Character
{
private:
	string inventory[2];
	int invCapacity;
	Space* charSpace;  //pointer to the space the character occupies

	bool dead;

public:
	Character();
	~Character();
	
	bool getDead();   //return alive or dead status
	void setDead(bool);

	void addItem(string);   //add item to inventory
	bool hasItem(string);  //checks inventory for item, return true if found

	void setCharSpace(Space*);
	Space* getCharSpace();
};
#endif
