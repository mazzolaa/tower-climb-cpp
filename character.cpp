/*******
* Author: Anthony Mazzola
* Email: mazzolaa@oregonstate.edu
* Date: 12/10/2019
* Description: Source file for Character class.
***/

#include "character.hpp"


/***********
* 		Character::Character()
* Description: Default Constructor.
*********/
Character::Character()
{
	dead = false;

	charSpace = NULL;

	//establish empty item inventory to start
	invCapacity = 2;
	for (int i = 0; i < invCapacity; i++)
	{
		inventory[i] = "empty";
	}

	//cout << "\nCharacter created. Items are " << inventory[0] << " and " << inventory[1] << " \n\n";
 }

/***********
* 		Character::~Character()
* Description: Destructor
*********/
Character::~Character()
{

}


//Search inventory for item sent as string parameter
bool Character::hasItem(string target)
{
	bool found = false;

	for (int i = 0; i < invCapacity; i++)
	{
		if (inventory[i] == target)
		{
			found = true;
		}
	}
	
	return found;
}


//Add an item to the character's inventory array
void Character::addItem(string item)
{
	for (int i = 0; i < invCapacity; i++)
	{
		if (inventory[i] == "empty")
		{
			inventory[i] = item;
			break;
		}
	}
}


//Set the character's current space
void Character::setCharSpace(Space* charSpace)
{
	this->charSpace = charSpace;
}

//return current space
Space* Character::getCharSpace()
{
	return charSpace;
}

//return life or death status
bool Character::getDead()
{
	return dead;
}

//Set life or death status;
void Character::setDead(bool status)
{
	dead = status;
}